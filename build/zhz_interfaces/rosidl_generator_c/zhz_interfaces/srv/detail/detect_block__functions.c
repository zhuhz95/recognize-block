// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zhz_interfaces:srv/DetectBlock.idl
// generated code does not contain a copyright notice
#include "zhz_interfaces/srv/detail/detect_block__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
zhz_interfaces__srv__DetectBlock_Request__init(zhz_interfaces__srv__DetectBlock_Request * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    zhz_interfaces__srv__DetectBlock_Request__fini(msg);
    return false;
  }
  return true;
}

void
zhz_interfaces__srv__DetectBlock_Request__fini(zhz_interfaces__srv__DetectBlock_Request * msg)
{
  if (!msg) {
    return;
  }
  // color
  rosidl_runtime_c__String__fini(&msg->color);
}

bool
zhz_interfaces__srv__DetectBlock_Request__are_equal(const zhz_interfaces__srv__DetectBlock_Request * lhs, const zhz_interfaces__srv__DetectBlock_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  return true;
}

bool
zhz_interfaces__srv__DetectBlock_Request__copy(
  const zhz_interfaces__srv__DetectBlock_Request * input,
  zhz_interfaces__srv__DetectBlock_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

zhz_interfaces__srv__DetectBlock_Request *
zhz_interfaces__srv__DetectBlock_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zhz_interfaces__srv__DetectBlock_Request * msg = (zhz_interfaces__srv__DetectBlock_Request *)allocator.allocate(sizeof(zhz_interfaces__srv__DetectBlock_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zhz_interfaces__srv__DetectBlock_Request));
  bool success = zhz_interfaces__srv__DetectBlock_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zhz_interfaces__srv__DetectBlock_Request__destroy(zhz_interfaces__srv__DetectBlock_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zhz_interfaces__srv__DetectBlock_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zhz_interfaces__srv__DetectBlock_Request__Sequence__init(zhz_interfaces__srv__DetectBlock_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zhz_interfaces__srv__DetectBlock_Request * data = NULL;

  if (size) {
    data = (zhz_interfaces__srv__DetectBlock_Request *)allocator.zero_allocate(size, sizeof(zhz_interfaces__srv__DetectBlock_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zhz_interfaces__srv__DetectBlock_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zhz_interfaces__srv__DetectBlock_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
zhz_interfaces__srv__DetectBlock_Request__Sequence__fini(zhz_interfaces__srv__DetectBlock_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zhz_interfaces__srv__DetectBlock_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

zhz_interfaces__srv__DetectBlock_Request__Sequence *
zhz_interfaces__srv__DetectBlock_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zhz_interfaces__srv__DetectBlock_Request__Sequence * array = (zhz_interfaces__srv__DetectBlock_Request__Sequence *)allocator.allocate(sizeof(zhz_interfaces__srv__DetectBlock_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zhz_interfaces__srv__DetectBlock_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zhz_interfaces__srv__DetectBlock_Request__Sequence__destroy(zhz_interfaces__srv__DetectBlock_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zhz_interfaces__srv__DetectBlock_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zhz_interfaces__srv__DetectBlock_Request__Sequence__are_equal(const zhz_interfaces__srv__DetectBlock_Request__Sequence * lhs, const zhz_interfaces__srv__DetectBlock_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zhz_interfaces__srv__DetectBlock_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zhz_interfaces__srv__DetectBlock_Request__Sequence__copy(
  const zhz_interfaces__srv__DetectBlock_Request__Sequence * input,
  zhz_interfaces__srv__DetectBlock_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zhz_interfaces__srv__DetectBlock_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zhz_interfaces__srv__DetectBlock_Request * data =
      (zhz_interfaces__srv__DetectBlock_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zhz_interfaces__srv__DetectBlock_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zhz_interfaces__srv__DetectBlock_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zhz_interfaces__srv__DetectBlock_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
zhz_interfaces__srv__DetectBlock_Response__init(zhz_interfaces__srv__DetectBlock_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // w
  // h
  return true;
}

void
zhz_interfaces__srv__DetectBlock_Response__fini(zhz_interfaces__srv__DetectBlock_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // w
  // h
}

bool
zhz_interfaces__srv__DetectBlock_Response__are_equal(const zhz_interfaces__srv__DetectBlock_Response * lhs, const zhz_interfaces__srv__DetectBlock_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // h
  if (lhs->h != rhs->h) {
    return false;
  }
  return true;
}

bool
zhz_interfaces__srv__DetectBlock_Response__copy(
  const zhz_interfaces__srv__DetectBlock_Response * input,
  zhz_interfaces__srv__DetectBlock_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // w
  output->w = input->w;
  // h
  output->h = input->h;
  return true;
}

zhz_interfaces__srv__DetectBlock_Response *
zhz_interfaces__srv__DetectBlock_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zhz_interfaces__srv__DetectBlock_Response * msg = (zhz_interfaces__srv__DetectBlock_Response *)allocator.allocate(sizeof(zhz_interfaces__srv__DetectBlock_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zhz_interfaces__srv__DetectBlock_Response));
  bool success = zhz_interfaces__srv__DetectBlock_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zhz_interfaces__srv__DetectBlock_Response__destroy(zhz_interfaces__srv__DetectBlock_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zhz_interfaces__srv__DetectBlock_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zhz_interfaces__srv__DetectBlock_Response__Sequence__init(zhz_interfaces__srv__DetectBlock_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zhz_interfaces__srv__DetectBlock_Response * data = NULL;

  if (size) {
    data = (zhz_interfaces__srv__DetectBlock_Response *)allocator.zero_allocate(size, sizeof(zhz_interfaces__srv__DetectBlock_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zhz_interfaces__srv__DetectBlock_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zhz_interfaces__srv__DetectBlock_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
zhz_interfaces__srv__DetectBlock_Response__Sequence__fini(zhz_interfaces__srv__DetectBlock_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zhz_interfaces__srv__DetectBlock_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

zhz_interfaces__srv__DetectBlock_Response__Sequence *
zhz_interfaces__srv__DetectBlock_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zhz_interfaces__srv__DetectBlock_Response__Sequence * array = (zhz_interfaces__srv__DetectBlock_Response__Sequence *)allocator.allocate(sizeof(zhz_interfaces__srv__DetectBlock_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zhz_interfaces__srv__DetectBlock_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zhz_interfaces__srv__DetectBlock_Response__Sequence__destroy(zhz_interfaces__srv__DetectBlock_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zhz_interfaces__srv__DetectBlock_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zhz_interfaces__srv__DetectBlock_Response__Sequence__are_equal(const zhz_interfaces__srv__DetectBlock_Response__Sequence * lhs, const zhz_interfaces__srv__DetectBlock_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zhz_interfaces__srv__DetectBlock_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zhz_interfaces__srv__DetectBlock_Response__Sequence__copy(
  const zhz_interfaces__srv__DetectBlock_Response__Sequence * input,
  zhz_interfaces__srv__DetectBlock_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zhz_interfaces__srv__DetectBlock_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zhz_interfaces__srv__DetectBlock_Response * data =
      (zhz_interfaces__srv__DetectBlock_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zhz_interfaces__srv__DetectBlock_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zhz_interfaces__srv__DetectBlock_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zhz_interfaces__srv__DetectBlock_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
