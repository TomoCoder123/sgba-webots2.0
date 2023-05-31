// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_interfaces:msg/Position.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
crazyflie_interfaces__msg__Position__init(crazyflie_interfaces__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crazyflie_interfaces__msg__Position__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // yaw
  return true;
}

void
crazyflie_interfaces__msg__Position__fini(crazyflie_interfaces__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // yaw
}

bool
crazyflie_interfaces__msg__Position__are_equal(const crazyflie_interfaces__msg__Position * lhs, const crazyflie_interfaces__msg__Position * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__msg__Position__copy(
  const crazyflie_interfaces__msg__Position * input,
  crazyflie_interfaces__msg__Position * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  return true;
}

crazyflie_interfaces__msg__Position *
crazyflie_interfaces__msg__Position__create()
{
  crazyflie_interfaces__msg__Position * msg = (crazyflie_interfaces__msg__Position *)malloc(sizeof(crazyflie_interfaces__msg__Position));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__msg__Position));
  bool success = crazyflie_interfaces__msg__Position__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__msg__Position__destroy(crazyflie_interfaces__msg__Position * msg)
{
  if (msg) {
    crazyflie_interfaces__msg__Position__fini(msg);
  }
  free(msg);
}


bool
crazyflie_interfaces__msg__Position__Sequence__init(crazyflie_interfaces__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_interfaces__msg__Position * data = NULL;
  if (size) {
    data = (crazyflie_interfaces__msg__Position *)calloc(size, sizeof(crazyflie_interfaces__msg__Position));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__msg__Position__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
crazyflie_interfaces__msg__Position__Sequence__fini(crazyflie_interfaces__msg__Position__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_interfaces__msg__Position__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

crazyflie_interfaces__msg__Position__Sequence *
crazyflie_interfaces__msg__Position__Sequence__create(size_t size)
{
  crazyflie_interfaces__msg__Position__Sequence * array = (crazyflie_interfaces__msg__Position__Sequence *)malloc(sizeof(crazyflie_interfaces__msg__Position__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__msg__Position__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__msg__Position__Sequence__destroy(crazyflie_interfaces__msg__Position__Sequence * array)
{
  if (array) {
    crazyflie_interfaces__msg__Position__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_interfaces__msg__Position__Sequence__are_equal(const crazyflie_interfaces__msg__Position__Sequence * lhs, const crazyflie_interfaces__msg__Position__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__msg__Position__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__msg__Position__Sequence__copy(
  const crazyflie_interfaces__msg__Position__Sequence * input,
  crazyflie_interfaces__msg__Position__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__msg__Position);
    crazyflie_interfaces__msg__Position * data =
      (crazyflie_interfaces__msg__Position *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__msg__Position__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__msg__Position__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazyflie_interfaces__msg__Position__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
