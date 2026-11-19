#include <chrono>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

#include <ament_index_cpp/get_package_share_directory.hpp>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/compressed_image.hpp>

using namespace std::chrono_literals;

class ImagePublisher : public rclcpp::Node
{
public:
  ImagePublisher()
  : Node("image_publisher")
  {

    this->declare_parameter<std::string>("image_path", "");
    std::string image_path;
    this->get_parameter("image_path", image_path);

    if (image_path.empty()) {
      image_path = ament_index_cpp::get_package_share_directory("zhz_recognizedBall") +
        "/data/blocks.jpg";
    }

    image_ = cv::imread(image_path, cv::IMREAD_COLOR);
    if (image_.empty()) {
      throw std::runtime_error("图片读取失败，请检查路径：" + image_path);
    }

    publisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>(
      "/camera/image_raw/compressed", 10);

    timer_ = this->create_wall_timer(
      500ms, std::bind(&ImagePublisher::timer_callback, this));

    RCLCPP_INFO(this->get_logger(), "样图路径：%s", image_path.c_str());
    RCLCPP_INFO(
      this->get_logger(), "图片大小：%d x %d，OpenCV 版本：%s",
      image_.cols, image_.rows, CV_VERSION);
    RCLCPP_INFO(this->get_logger(), "开始发布话题：/camera/image_raw/compressed");
  }

private:
  void timer_callback()
  {

    std::vector<uchar> jpeg_data;
    cv::imencode(".jpg", image_, jpeg_data);

    sensor_msgs::msg::CompressedImage message;
    message.header.stamp = this->now();
    message.header.frame_id = "camera";
    message.format = "jpeg";
    message.data = jpeg_data;

    publisher_->publish(message);
  }

  cv::Mat image_;
  rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  try {
    rclcpp::spin(std::make_shared<ImagePublisher>());
  } catch (const std::exception & error) {
    RCLCPP_FATAL(rclcpp::get_logger("image_publisher"), "%s", error.what());
    rclcpp::shutdown();
    return 1;
  }

  rclcpp::shutdown();
  return 0;
}
