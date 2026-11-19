// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice

#ifndef ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__BUILDER_HPP_
#define ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zhz_interfaces/srv/detail/detect_block__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zhz_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBlock_Request_color
{
public:
  Init_DetectBlock_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zhz_interfaces::srv::DetectBlock_Request color(::zhz_interfaces::srv::DetectBlock_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zhz_interfaces::srv::DetectBlock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zhz_interfaces::srv::DetectBlock_Request>()
{
  return zhz_interfaces::srv::builder::Init_DetectBlock_Request_color();
}

}  // namespace zhz_interfaces


namespace zhz_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBlock_Response_h
{
public:
  explicit Init_DetectBlock_Response_h(::zhz_interfaces::srv::DetectBlock_Response & msg)
  : msg_(msg)
  {}
  ::zhz_interfaces::srv::DetectBlock_Response h(::zhz_interfaces::srv::DetectBlock_Response::_h_type arg)
  {
    msg_.h = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zhz_interfaces::srv::DetectBlock_Response msg_;
};

class Init_DetectBlock_Response_w
{
public:
  explicit Init_DetectBlock_Response_w(::zhz_interfaces::srv::DetectBlock_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBlock_Response_h w(::zhz_interfaces::srv::DetectBlock_Response::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_DetectBlock_Response_h(msg_);
  }

private:
  ::zhz_interfaces::srv::DetectBlock_Response msg_;
};

class Init_DetectBlock_Response_y
{
public:
  explicit Init_DetectBlock_Response_y(::zhz_interfaces::srv::DetectBlock_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBlock_Response_w y(::zhz_interfaces::srv::DetectBlock_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DetectBlock_Response_w(msg_);
  }

private:
  ::zhz_interfaces::srv::DetectBlock_Response msg_;
};

class Init_DetectBlock_Response_x
{
public:
  Init_DetectBlock_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBlock_Response_y x(::zhz_interfaces::srv::DetectBlock_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DetectBlock_Response_y(msg_);
  }

private:
  ::zhz_interfaces::srv::DetectBlock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zhz_interfaces::srv::DetectBlock_Response>()
{
  return zhz_interfaces::srv::builder::Init_DetectBlock_Response_x();
}

}  // namespace zhz_interfaces

#endif  // ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__BUILDER_HPP_
