// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice

#ifndef ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__STRUCT_H_
#define ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectBlock in the package zhz_interfaces.
typedef struct zhz_interfaces__srv__DetectBlock_Request
{
  rosidl_runtime_c__String color;
} zhz_interfaces__srv__DetectBlock_Request;

// Struct for a sequence of zhz_interfaces__srv__DetectBlock_Request.
typedef struct zhz_interfaces__srv__DetectBlock_Request__Sequence
{
  zhz_interfaces__srv__DetectBlock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zhz_interfaces__srv__DetectBlock_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DetectBlock in the package zhz_interfaces.
typedef struct zhz_interfaces__srv__DetectBlock_Response
{
  int32_t x;
  int32_t y;
  int32_t w;
  int32_t h;
} zhz_interfaces__srv__DetectBlock_Response;

// Struct for a sequence of zhz_interfaces__srv__DetectBlock_Response.
typedef struct zhz_interfaces__srv__DetectBlock_Response__Sequence
{
  zhz_interfaces__srv__DetectBlock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zhz_interfaces__srv__DetectBlock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__STRUCT_H_
