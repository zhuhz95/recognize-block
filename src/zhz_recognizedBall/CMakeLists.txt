cmake_minimum_required(VERSION 3.8)
project(zhz_recognizedBall)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(zhz_interfaces REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(OpenCV 4.9 REQUIRED)

add_executable(image_publisher src/image_publisher.cpp)
ament_target_dependencies(image_publisher
  rclcpp
  sensor_msgs
  ament_index_cpp
)
target_include_directories(image_publisher PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(image_publisher ${OpenCV_LIBS})

add_executable(block_detector src/block_detector.cpp)
ament_target_dependencies(block_detector
  rclcpp
  sensor_msgs
  std_msgs
  visualization_msgs
  geometry_msgs
  zhz_interfaces
)
target_include_directories(block_detector PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(block_detector ${OpenCV_LIBS})


install(TARGETS
  image_publisher
  block_detector
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  data
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
