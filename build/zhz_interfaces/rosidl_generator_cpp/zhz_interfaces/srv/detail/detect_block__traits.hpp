// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice

#ifndef ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__TRAITS_HPP_
#define ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zhz_interfaces/srv/detail/detect_block__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zhz_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBlock_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectBlock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBlock_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace zhz_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zhz_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zhz_interfaces::srv::DetectBlock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zhz_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zhz_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zhz_interfaces::srv::DetectBlock_Request & msg)
{
  return zhz_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zhz_interfaces::srv::DetectBlock_Request>()
{
  return "zhz_interfaces::srv::DetectBlock_Request";
}

template<>
inline const char * name<zhz_interfaces::srv::DetectBlock_Request>()
{
  return "zhz_interfaces/srv/DetectBlock_Request";
}

template<>
struct has_fixed_size<zhz_interfaces::srv::DetectBlock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zhz_interfaces::srv::DetectBlock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zhz_interfaces::srv::DetectBlock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zhz_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBlock_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectBlock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBlock_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace zhz_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zhz_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zhz_interfaces::srv::DetectBlock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zhz_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zhz_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zhz_interfaces::srv::DetectBlock_Response & msg)
{
  return zhz_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zhz_interfaces::srv::DetectBlock_Response>()
{
  return "zhz_interfaces::srv::DetectBlock_Response";
}

template<>
inline const char * name<zhz_interfaces::srv::DetectBlock_Response>()
{
  return "zhz_interfaces/srv/DetectBlock_Response";
}

template<>
struct has_fixed_size<zhz_interfaces::srv::DetectBlock_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zhz_interfaces::srv::DetectBlock_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zhz_interfaces::srv::DetectBlock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zhz_interfaces::srv::DetectBlock>()
{
  return "zhz_interfaces::srv::DetectBlock";
}

template<>
inline const char * name<zhz_interfaces::srv::DetectBlock>()
{
  return "zhz_interfaces/srv/DetectBlock";
}

template<>
struct has_fixed_size<zhz_interfaces::srv::DetectBlock>
  : std::integral_constant<
    bool,
    has_fixed_size<zhz_interfaces::srv::DetectBlock_Request>::value &&
    has_fixed_size<zhz_interfaces::srv::DetectBlock_Response>::value
  >
{
};

template<>
struct has_bounded_size<zhz_interfaces::srv::DetectBlock>
  : std::integral_constant<
    bool,
    has_bounded_size<zhz_interfaces::srv::DetectBlock_Request>::value &&
    has_bounded_size<zhz_interfaces::srv::DetectBlock_Response>::value
  >
{
};

template<>
struct is_service<zhz_interfaces::srv::DetectBlock>
  : std::true_type
{
};

template<>
struct is_service_request<zhz_interfaces::srv::DetectBlock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zhz_interfaces::srv::DetectBlock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__TRAITS_HPP_
