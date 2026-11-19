// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zhz_interfaces/srv/detail/detect_block__rosidl_typesupport_introspection_c.h"
#include "zhz_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zhz_interfaces/srv/detail/detect_block__functions.h"
#include "zhz_interfaces/srv/detail/detect_block__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zhz_interfaces__srv__DetectBlock_Request__init(message_memory);
}

void zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_fini_function(void * message_memory)
{
  zhz_interfaces__srv__DetectBlock_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_member_array[1] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zhz_interfaces__srv__DetectBlock_Request, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_members = {
  "zhz_interfaces__srv",  // message namespace
  "DetectBlock_Request",  // message name
  1,  // number of fields
  sizeof(zhz_interfaces__srv__DetectBlock_Request),
  zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_member_array,  // message members
  zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_type_support_handle = {
  0,
  &zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zhz_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock_Request)() {
  if (!zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_type_support_handle.typesupport_identifier) {
    zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zhz_interfaces__srv__DetectBlock_Request__rosidl_typesupport_introspection_c__DetectBlock_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zhz_interfaces/srv/detail/detect_block__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zhz_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zhz_interfaces/srv/detail/detect_block__functions.h"
// already included above
// #include "zhz_interfaces/srv/detail/detect_block__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zhz_interfaces__srv__DetectBlock_Response__init(message_memory);
}

void zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_fini_function(void * message_memory)
{
  zhz_interfaces__srv__DetectBlock_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zhz_interfaces__srv__DetectBlock_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zhz_interfaces__srv__DetectBlock_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zhz_interfaces__srv__DetectBlock_Response, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zhz_interfaces__srv__DetectBlock_Response, h),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_members = {
  "zhz_interfaces__srv",  // message namespace
  "DetectBlock_Response",  // message name
  4,  // number of fields
  sizeof(zhz_interfaces__srv__DetectBlock_Response),
  zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_member_array,  // message members
  zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_type_support_handle = {
  0,
  &zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zhz_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock_Response)() {
  if (!zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_type_support_handle.typesupport_identifier) {
    zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zhz_interfaces__srv__DetectBlock_Response__rosidl_typesupport_introspection_c__DetectBlock_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zhz_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "zhz_interfaces/srv/detail/detect_block__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_members = {
  "zhz_interfaces__srv",  // service namespace
  "DetectBlock",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_Request_message_type_support_handle,
  NULL  // response message
  // zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_Response_message_type_support_handle
};

static rosidl_service_type_support_t zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_type_support_handle = {
  0,
  &zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zhz_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock)() {
  if (!zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_type_support_handle.typesupport_identifier) {
    zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zhz_interfaces, srv, DetectBlock_Response)()->data;
  }

  return &zhz_interfaces__srv__detail__detect_block__rosidl_typesupport_introspection_c__DetectBlock_service_type_support_handle;
}
