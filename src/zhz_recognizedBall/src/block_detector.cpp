#include <chrono>
#include <cctype>
#include <memory>
#include <string>
#include <vector>

#include <geometry_msgs/msg/point.hpp>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/compressed_image.hpp>
#include <std_msgs/msg/string.hpp>
#include <visualization_msgs/msg/image_marker.hpp>

#include "zhz_interfaces/srv/detect_block.hpp"

using namespace std::chrono_literals;

struct Box
{
  int x = -1;
  int y = -1;
  int w = 0;
  int h = 0;
};

std::string normalizeColor(std::string color)
{

  const std::size_t begin = color.find_first_not_of(" \t\n\r");
  const std::size_t end = color.find_last_not_of(" \t\n\r");
  if (begin == std::string::npos) {
    return "";
  }
  color = color.substr(begin, end - begin + 1);

  for (char & c : color) {
    c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
  }

  if (color == "red") {
    return "red";
  }
  if (color == "green") {
    return "green";
  }
  if (color == "blue") {
    return "blue";
  }
  return "";
}

class BlockDetector : public rclcpp::Node
{
public:
  BlockDetector()
  : Node("block_detector")
  {

    image_subscription_ = this->create_subscription<sensor_msgs::msg::CompressedImage>(
      "/camera/image_raw/compressed", 10,
      std::bind(&BlockDetector::imageCallback, this, std::placeholders::_1));

    image_publisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>(
      "/camera/compressed", 10);

    marker_publisher_ = this->create_publisher<visualization_msgs::msg::ImageMarker>(
      "/block_marker", 10);

    status_publisher_ = this->create_publisher<std_msgs::msg::String>("/detect/status", 10);

    detect_service_ = this->create_service<zhz_interfaces::srv::DetectBlock>(
      "/detect_block",
      std::bind(
        &BlockDetector::detectCallback, this,
        std::placeholders::_1, std::placeholders::_2));

    timer_ = this->create_wall_timer(
      500ms, std::bind(&BlockDetector::timerCallback, this));

    RCLCPP_INFO(this->get_logger(), "订阅图像：/camera/image_raw/compressed");
    RCLCPP_INFO(this->get_logger(), "发布图像：/camera/compressed");
    RCLCPP_INFO(this->get_logger(), "发布标注：/block_marker");
    RCLCPP_INFO(this->get_logger(), "服务已启动：/detect_block");
  }

private:

  void imageCallback(const sensor_msgs::msg::CompressedImage::SharedPtr message)
  {

    cv::Mat jpeg_data(
      1, static_cast<int>(message->data.size()), CV_8UC1,
      const_cast<unsigned char *>(message->data.data()));

    cv::Mat image = cv::imdecode(jpeg_data, cv::IMREAD_COLOR);
    if (image.empty()) {
      RCLCPP_WARN(this->get_logger(), "图像解码失败");
      return;
    }

    latest_image_ = image;
    has_image_ = true;

    static bool first_image = true;
    if (first_image) {
      RCLCPP_INFO(
        this->get_logger(), "收到第一张图像：%d x %d",
        image.cols, image.rows);
      first_image = false;
    }
  }

  void detectCallback(
    const std::shared_ptr<zhz_interfaces::srv::DetectBlock::Request> request,
    std::shared_ptr<zhz_interfaces::srv::DetectBlock::Response> response)
  {

    response->x = -1;
    response->y = -1;
    response->w = 0;
    response->h = 0;

    const std::string color = normalizeColor(request->color);
    if (color.empty()) {
      RCLCPP_WARN(
        this->get_logger(), "不支持的颜色：%s，请输入 red / green / blue",
        request->color.c_str());
      publishStatus("color=unknown;error=unsupported color");
      return;
    }

    if (!has_image_) {
      RCLCPP_WARN(this->get_logger(), "还没有收到图像，请先启动 image_publisher");
      publishStatus("color=" + color + ";error=no image");
      return;
    }

    const Box box = findColorBox(latest_image_, color);
    if (box.x < 0) {
      RCLCPP_WARN(this->get_logger(), "没有找到 %s 方块", color.c_str());
      publishStatus("color=" + color + ";error=not found");
      return;
    }

    target_box_ = box;
    has_result_ = true;

    response->x = box.x;
    response->y = box.y;
    response->w = box.w;
    response->h = box.h;

    RCLCPP_INFO(
      this->get_logger(), "识别到 %s：x=%d y=%d w=%d h=%d",
      color.c_str(), box.x, box.y, box.w, box.h);

    publishStatus(
      "color=" + color + ";x=" + std::to_string(box.x) +
      ";y=" + std::to_string(box.y) +
      ";w=" + std::to_string(box.w) +
      ";h=" + std::to_string(box.h));

    publishResultImage();
    publishImageMarker();
  }

  Box findColorBox(const cv::Mat & image, const std::string & color)
  {
    cv::Mat hsv;
    cv::cvtColor(image, hsv, cv::COLOR_BGR2HSV);

    cv::Mat mask = cv::Mat::zeros(hsv.size(), CV_8UC1);

    if (color == "red") {

      cv::Mat mask1;
      cv::Mat mask2;
      cv::inRange(hsv, cv::Scalar(0, 100, 80), cv::Scalar(10, 255, 255), mask1);
      cv::inRange(hsv, cv::Scalar(170, 100, 80), cv::Scalar(180, 255, 255), mask2);
      cv::bitwise_or(mask1, mask2, mask);
    } else if (color == "green") {
      cv::inRange(hsv, cv::Scalar(35, 80, 60), cv::Scalar(85, 255, 255), mask);
    } else if (color == "blue") {
      cv::inRange(hsv, cv::Scalar(85, 100, 70), cv::Scalar(130, 255, 255), mask);
    }

    cv::morphologyEx(
      mask, mask, cv::MORPH_OPEN,
      cv::getStructuringElement(cv::MORPH_RECT, cv::Size(7, 7)));
    cv::morphologyEx(
      mask, mask, cv::MORPH_CLOSE,
      cv::getStructuringElement(cv::MORPH_RECT, cv::Size(11, 11)));

    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    double max_area = 0.0;
    cv::Rect best_rect;
    for (const auto & contour : contours) {
      const double area = cv::contourArea(contour);
      if (area > max_area) {
        max_area = area;
        best_rect = cv::boundingRect(contour);
      }
    }

    if (max_area < 2000.0) {
      return Box();
    }

    return Box{best_rect.x, best_rect.y, best_rect.width, best_rect.height};
  }

  void drawBox(cv::Mat & image, const Box & box)
  {
    cv::rectangle(
      image, cv::Rect(box.x, box.y, box.w, box.h),
      cv::Scalar(0, 0, 255), 5);
  }

  void publishResultImage()
  {
    if (!has_image_) {
      return;
    }

    cv::Mat result = latest_image_.clone();
    if (has_result_) {
      drawBox(result, target_box_);
    }

    std::vector<uchar> jpeg_data;
    cv::imencode(".jpg", result, jpeg_data);

    sensor_msgs::msg::CompressedImage message;
    message.header.stamp = this->now();
    message.header.frame_id = "camera";
    message.format = "jpeg";
    message.data = jpeg_data;

    image_publisher_->publish(message);
  }

  void publishImageMarker()
  {
    if (!has_result_) {
      return;
    }

    const auto now = this->now();

    visualization_msgs::msg::ImageMarker rectangle;
    rectangle.header.stamp = now;
    rectangle.header.frame_id = "camera";
    rectangle.ns = "block";
    rectangle.id = 0;
    rectangle.type = visualization_msgs::msg::ImageMarker::LINE_STRIP;
    rectangle.action = visualization_msgs::msg::ImageMarker::ADD;
    rectangle.scale = 5.0;
    rectangle.outline_color.r = 1.0;
    rectangle.outline_color.g = 0.0;
    rectangle.outline_color.b = 0.0;
    rectangle.outline_color.a = 1.0;
    rectangle.lifetime.sec = 0;
    rectangle.lifetime.nanosec = 700000000;

    rectangle.points.push_back(makePoint(target_box_.x, target_box_.y));
    rectangle.points.push_back(makePoint(target_box_.x + target_box_.w, target_box_.y));
    rectangle.points.push_back(
      makePoint(target_box_.x + target_box_.w, target_box_.y + target_box_.h));
    rectangle.points.push_back(makePoint(target_box_.x, target_box_.y + target_box_.h));
    rectangle.points.push_back(makePoint(target_box_.x, target_box_.y));

    marker_publisher_->publish(rectangle);

  }

  static geometry_msgs::msg::Point makePoint(double x, double y)
  {
    geometry_msgs::msg::Point point;
    point.x = x;
    point.y = y;
    point.z = 0.0;
    return point;
  }

  void publishStatus(const std::string & text)
  {
    std_msgs::msg::String message;
    message.data = text;
    status_publisher_->publish(message);
  }

  void timerCallback()
  {
    publishResultImage();
    publishImageMarker();
  }

  cv::Mat latest_image_;
  bool has_image_ = false;

  Box target_box_;
  bool has_result_ = false;

  rclcpp::Subscription<sensor_msgs::msg::CompressedImage>::SharedPtr image_subscription_;
  rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr image_publisher_;
  rclcpp::Publisher<visualization_msgs::msg::ImageMarker>::SharedPtr marker_publisher_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr status_publisher_;
  rclcpp::Service<zhz_interfaces::srv::DetectBlock>::SharedPtr detect_service_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<BlockDetector>());
  rclcpp::shutdown();
  return 0;
}
