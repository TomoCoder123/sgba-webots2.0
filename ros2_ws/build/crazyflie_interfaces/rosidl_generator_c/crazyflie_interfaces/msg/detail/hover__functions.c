// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_interfaces:msg/Hover.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/msg/detail/hover__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
crazyflie_interfaces__msg__Hover__init(crazyflie_interfaces__msg__Hover * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crazyflie_interfaces__msg__Hover__fini(msg);
    return false;
  }
  // vx
  // vy
  // yaw_rate
  // z_distance
  return true;
}

void
crazyflie_interfaces__msg__Hover__fini(crazyflie_interfaces__msg__Hover * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vx
  // vy
  // yaw_rate
  // z_distance
}

bool
crazyflie_interfaces__msg__Hover__are_equal(const crazyflie_interfaces__msg__Hover * lhs, const crazyflie_interfaces__msg__Hover * rhs)
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
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // z_distance
  if (lhs->z_distance != rhs->z_distance) {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__msg__Hover__copy(
  const crazyflie_interfaces__msg__Hover * input,
  crazyflie_interfaces__msg__Hover * output)
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
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // z_distance
  output->z_distance = input->z_distance;
  return true;
}

crazyflie_interfaces__msg__Hover *
crazyflie_interfaces__msg__Hover__create()
{
  crazyflie_interfaces__msg__Hover * msg = (crazyflie_interfaces__msg__Hover *)malloc(sizeof(crazyflie_interfaces__msg__Hover));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__msg__Hover));
  bool success = crazyflie_interfaces__msg__Hover__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__msg__Hover__destroy(crazyflie_interfaces__msg__Hover * msg)
{
  if (msg) {
    crazyflie_interfaces__msg__Hover__fini(msg);
  }
  free(msg);
}


bool
crazyflie_interfaces__msg__Hover__Sequence__init(crazyflie_interfaces__msg__Hover__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_interfaces__msg__Hover * data = NULL;
  if (size) {
    data = (crazyflie_interfaces__msg__Hover *)calloc(size, sizeof(crazyflie_interfaces__msg__Hover));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__msg__Hover__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__msg__Hover__fini(&data[i - 1]);
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
crazyflie_interfaces__msg__Hover__Sequence__fini(crazyflie_interfaces__msg__Hover__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_interfaces__msg__Hover__fini(&array->data[i]);
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

crazyflie_interfaces__msg__Hover__Sequence *
crazyflie_interfaces__msg__Hover__Sequence__create(size_t size)
{
  crazyflie_interfaces__msg__Hover__Sequence * array = (crazyflie_interfaces__msg__Hover__Sequence *)malloc(sizeof(crazyflie_interfaces__msg__Hover__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__msg__Hover__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__msg__Hover__Sequence__destroy(crazyflie_interfaces__msg__Hover__Sequence * array)
{
  if (array) {
    crazyflie_interfaces__msg__Hover__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_interfaces__msg__Hover__Sequence__are_equal(const crazyflie_interfaces__msg__Hover__Sequence * lhs, const crazyflie_interfaces__msg__Hover__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__msg__Hover__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__msg__Hover__Sequence__copy(
  const crazyflie_interfaces__msg__Hover__Sequence * input,
  crazyflie_interfaces__msg__Hover__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__msg__Hover);
    crazyflie_interfaces__msg__Hover * data =
      (crazyflie_interfaces__msg__Hover *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__msg__Hover__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__msg__Hover__fini(&data[i]);
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
    if (!crazyflie_interfaces__msg__Hover__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}