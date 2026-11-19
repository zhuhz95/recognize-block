// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice

#ifndef ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__STRUCT_HPP_
#define ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zhz_interfaces__srv__DetectBlock_Request __attribute__((deprecated))
#else
# define DEPRECATED__zhz_interfaces__srv__DetectBlock_Request __declspec(deprecated)
#endif

namespace zhz_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectBlock_Request_
{
  using Type = DetectBlock_Request_<ContainerAllocator>;

  explicit DetectBlock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  explicit DetectBlock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zhz_interfaces__srv__DetectBlock_Request
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zhz_interfaces__srv__DetectBlock_Request
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectBlock_Request_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectBlock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectBlock_Request_

// alias to use template instance with default allocator
using DetectBlock_Request =
  zhz_interfaces::srv::DetectBlock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zhz_interfaces


#ifndef _WIN32
# define DEPRECATED__zhz_interfaces__srv__DetectBlock_Response __attribute__((deprecated))
#else
# define DEPRECATED__zhz_interfaces__srv__DetectBlock_Response __declspec(deprecated)
#endif

namespace zhz_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectBlock_Response_
{
  using Type = DetectBlock_Response_<ContainerAllocator>;

  explicit DetectBlock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->w = 0l;
      this->h = 0l;
    }
  }

  explicit DetectBlock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->w = 0l;
      this->h = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _w_type =
    int32_t;
  _w_type w;
  using _h_type =
    int32_t;
  _h_type h;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__w(
    const int32_t & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__h(
    const int32_t & _arg)
  {
    this->h = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zhz_interfaces__srv__DetectBlock_Response
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zhz_interfaces__srv__DetectBlock_Response
    std::shared_ptr<zhz_interfaces::srv::DetectBlock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectBlock_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectBlock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectBlock_Response_

// alias to use template instance with default allocator
using DetectBlock_Response =
  zhz_interfaces::srv::DetectBlock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zhz_interfaces

namespace zhz_interfaces
{

namespace srv
{

struct DetectBlock
{
  using Request = zhz_interfaces::srv::DetectBlock_Request;
  using Response = zhz_interfaces::srv::DetectBlock_Response;
};

}  // namespace srv

}  // namespace zhz_interfaces

#endif  // ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__STRUCT_HPP_
