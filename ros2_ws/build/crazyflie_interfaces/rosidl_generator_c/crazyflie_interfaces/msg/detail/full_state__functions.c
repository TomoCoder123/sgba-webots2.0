// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_interfaces:msg/FullState.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/msg/detail/full_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acc`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
crazyflie_interfaces__msg__FullState__init(crazyflie_interfaces__msg__FullState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crazyflie_interfaces__msg__FullState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    crazyflie_interfaces__msg__FullState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    crazyflie_interfaces__msg__FullState__fini(msg);
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Vector3__init(&msg->acc)) {
    crazyflie_interfaces__msg__FullState__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_interfaces__msg__FullState__fini(crazyflie_interfaces__msg__FullState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // acc
  geometry_msgs__msg__Vector3__fini(&msg->acc);
}

bool
crazyflie_interfaces__msg__FullState__are_equal(const crazyflie_interfaces__msg__FullState * lhs, const crazyflie_interfaces__msg__FullState * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acc), &(rhs->acc)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__msg__FullState__copy(
  const crazyflie_interfaces__msg__FullState * input,
  crazyflie_interfaces__msg__FullState * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acc), &(output->acc)))
  {
    return false;
  }
  return true;
}

crazyflie_interfaces__msg__FullState *
crazyflie_interfaces__msg__FullState__create()
{
  crazyflie_interfaces__msg__FullState * msg = (crazyflie_interfaces__msg__FullState *)malloc(sizeof(crazyflie_interfaces__msg__FullState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__msg__FullState));
  bool success = crazyflie_interfaces__msg__FullState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__msg__FullState__destroy(crazyflie_interfaces__msg__FullState * msg)
{
  if (msg) {
    crazyflie_interfaces__msg__FullState__fini(msg);
  }
  free(msg);
}


bool
crazyflie_interfaces__msg__FullState__Sequence__init(crazyflie_interfaces__msg__FullState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_interfaces__msg__FullState * data = NULL;
  if (size) {
    data = (crazyflie_interfaces__msg__FullState *)calloc(size, sizeof(crazyflie_interfaces__msg__FullState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__msg__FullState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__msg__FullState__fini(&data[i - 1]);
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
crazyflie_interfaces__msg__FullState__Sequence__fini(crazyflie_interfaces__msg__FullState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_interfaces__msg__FullState__fini(&array->data[i]);
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

crazyflie_interfaces__msg__FullState__Sequence *
crazyflie_interfaces__msg__FullState__Sequence__create(size_t size)
{
  crazyflie_interfaces__msg__FullState__Sequence * array = (crazyflie_interfaces__msg__FullState__Sequence *)malloc(sizeof(crazyflie_interfaces__msg__FullState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__msg__FullState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__msg__FullState__Sequence__destroy(crazyflie_interfaces__msg__FullState__Sequence * array)
{
  if (array) {
    crazyflie_interfaces__msg__FullState__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_interfaces__msg__FullState__Sequence__are_equal(const crazyflie_interfaces__msg__FullState__Sequence * lhs, const crazyflie_interfaces__msg__FullState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__msg__FullState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__msg__FullState__Sequence__copy(
  const crazyflie_interfaces__msg__FullState__Sequence * input,
  crazyflie_interfaces__msg__FullState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__msg__FullState);
    crazyflie_interfaces__msg__FullState * data =
      (crazyflie_interfaces__msg__FullState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__msg__FullState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__msg__FullState__fini(&data[i]);
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
    if (!crazyflie_interfaces__msg__FullState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
