// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice

#ifndef ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__FUNCTIONS_H_
#define ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "zhz_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "zhz_interfaces/srv/detail/detect_block__struct.h"

/// Initialize srv/DetectBlock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zhz_interfaces__srv__DetectBlock_Request
 * )) before or use
 * zhz_interfaces__srv__DetectBlock_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Request__init(zhz_interfaces__srv__DetectBlock_Request * msg);

/// Finalize srv/DetectBlock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Request__fini(zhz_interfaces__srv__DetectBlock_Request * msg);

/// Create srv/DetectBlock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zhz_interfaces__srv__DetectBlock_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
zhz_interfaces__srv__DetectBlock_Request *
zhz_interfaces__srv__DetectBlock_Request__create();

/// Destroy srv/DetectBlock message.
/**
 * It calls
 * zhz_interfaces__srv__DetectBlock_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Request__destroy(zhz_interfaces__srv__DetectBlock_Request * msg);

/// Check for srv/DetectBlock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Request__are_equal(const zhz_interfaces__srv__DetectBlock_Request * lhs, const zhz_interfaces__srv__DetectBlock_Request * rhs);

/// Copy a srv/DetectBlock message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Request__copy(
  const zhz_interfaces__srv__DetectBlock_Request * input,
  zhz_interfaces__srv__DetectBlock_Request * output);

/// Initialize array of srv/DetectBlock messages.
/**
 * It allocates the memory for the number of elements and calls
 * zhz_interfaces__srv__DetectBlock_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Request__Sequence__init(zhz_interfaces__srv__DetectBlock_Request__Sequence * array, size_t size);

/// Finalize array of srv/DetectBlock messages.
/**
 * It calls
 * zhz_interfaces__srv__DetectBlock_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Request__Sequence__fini(zhz_interfaces__srv__DetectBlock_Request__Sequence * array);

/// Create array of srv/DetectBlock messages.
/**
 * It allocates the memory for the array and calls
 * zhz_interfaces__srv__DetectBlock_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
zhz_interfaces__srv__DetectBlock_Request__Sequence *
zhz_interfaces__srv__DetectBlock_Request__Sequence__create(size_t size);

/// Destroy array of srv/DetectBlock messages.
/**
 * It calls
 * zhz_interfaces__srv__DetectBlock_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Request__Sequence__destroy(zhz_interfaces__srv__DetectBlock_Request__Sequence * array);

/// Check for srv/DetectBlock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Request__Sequence__are_equal(const zhz_interfaces__srv__DetectBlock_Request__Sequence * lhs, const zhz_interfaces__srv__DetectBlock_Request__Sequence * rhs);

/// Copy an array of srv/DetectBlock messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Request__Sequence__copy(
  const zhz_interfaces__srv__DetectBlock_Request__Sequence * input,
  zhz_interfaces__srv__DetectBlock_Request__Sequence * output);

/// Initialize srv/DetectBlock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zhz_interfaces__srv__DetectBlock_Response
 * )) before or use
 * zhz_interfaces__srv__DetectBlock_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Response__init(zhz_interfaces__srv__DetectBlock_Response * msg);

/// Finalize srv/DetectBlock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Response__fini(zhz_interfaces__srv__DetectBlock_Response * msg);

/// Create srv/DetectBlock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zhz_interfaces__srv__DetectBlock_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
zhz_interfaces__srv__DetectBlock_Response *
zhz_interfaces__srv__DetectBlock_Response__create();

/// Destroy srv/DetectBlock message.
/**
 * It calls
 * zhz_interfaces__srv__DetectBlock_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Response__destroy(zhz_interfaces__srv__DetectBlock_Response * msg);

/// Check for srv/DetectBlock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Response__are_equal(const zhz_interfaces__srv__DetectBlock_Response * lhs, const zhz_interfaces__srv__DetectBlock_Response * rhs);

/// Copy a srv/DetectBlock message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Response__copy(
  const zhz_interfaces__srv__DetectBlock_Response * input,
  zhz_interfaces__srv__DetectBlock_Response * output);

/// Initialize array of srv/DetectBlock messages.
/**
 * It allocates the memory for the number of elements and calls
 * zhz_interfaces__srv__DetectBlock_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Response__Sequence__init(zhz_interfaces__srv__DetectBlock_Response__Sequence * array, size_t size);

/// Finalize array of srv/DetectBlock messages.
/**
 * It calls
 * zhz_interfaces__srv__DetectBlock_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Response__Sequence__fini(zhz_interfaces__srv__DetectBlock_Response__Sequence * array);

/// Create array of srv/DetectBlock messages.
/**
 * It allocates the memory for the array and calls
 * zhz_interfaces__srv__DetectBlock_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
zhz_interfaces__srv__DetectBlock_Response__Sequence *
zhz_interfaces__srv__DetectBlock_Response__Sequence__create(size_t size);

/// Destroy array of srv/DetectBlock messages.
/**
 * It calls
 * zhz_interfaces__srv__DetectBlock_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
void
zhz_interfaces__srv__DetectBlock_Response__Sequence__destroy(zhz_interfaces__srv__DetectBlock_Response__Sequence * array);

/// Check for srv/DetectBlock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Response__Sequence__are_equal(const zhz_interfaces__srv__DetectBlock_Response__Sequence * lhs, const zhz_interfaces__srv__DetectBlock_Response__Sequence * rhs);

/// Copy an array of srv/DetectBlock messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_zhz_interfaces
bool
zhz_interfaces__srv__DetectBlock_Response__Sequence__copy(
  const zhz_interfaces__srv__DetectBlock_Response__Sequence * input,
  zhz_interfaces__srv__DetectBlock_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ZHZ_INTERFACES__SRV__DETAIL__DETECT_BLOCK__FUNCTIONS_H_
