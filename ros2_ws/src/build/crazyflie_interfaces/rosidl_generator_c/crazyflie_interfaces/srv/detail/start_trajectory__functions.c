// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_interfaces:srv/StartTrajectory.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/srv/detail/start_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
crazyflie_interfaces__srv__StartTrajectory_Request__init(crazyflie_interfaces__srv__StartTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // group_mask
  // trajectory_id
  // timescale
  // reversed
  // relative
  return true;
}

void
crazyflie_interfaces__srv__StartTrajectory_Request__fini(crazyflie_interfaces__srv__StartTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // group_mask
  // trajectory_id
  // timescale
  // reversed
  // relative
}

bool
crazyflie_interfaces__srv__StartTrajectory_Request__are_equal(const crazyflie_interfaces__srv__StartTrajectory_Request * lhs, const crazyflie_interfaces__srv__StartTrajectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group_mask
  if (lhs->group_mask != rhs->group_mask) {
    return false;
  }
  // trajectory_id
  if (lhs->trajectory_id != rhs->trajectory_id) {
    return false;
  }
  // timescale
  if (lhs->timescale != rhs->timescale) {
    return false;
  }
  // reversed
  if (lhs->reversed != rhs->reversed) {
    return false;
  }
  // relative
  if (lhs->relative != rhs->relative) {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__srv__StartTrajectory_Request__copy(
  const crazyflie_interfaces__srv__StartTrajectory_Request * input,
  crazyflie_interfaces__srv__StartTrajectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // group_mask
  output->group_mask = input->group_mask;
  // trajectory_id
  output->trajectory_id = input->trajectory_id;
  // timescale
  output->timescale = input->timescale;
  // reversed
  output->reversed = input->reversed;
  // relative
  output->relative = input->relative;
  return true;
}

crazyflie_interfaces__srv__StartTrajectory_Request *
crazyflie_interfaces__srv__StartTrajectory_Request__create()
{
  crazyflie_interfaces__srv__StartTrajectory_Request * msg = (crazyflie_interfaces__srv__StartTrajectory_Request *)malloc(sizeof(crazyflie_interfaces__srv__StartTrajectory_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__srv__StartTrajectory_Request));
  bool success = crazyflie_interfaces__srv__StartTrajectory_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__srv__StartTrajectory_Request__destroy(crazyflie_interfaces__srv__StartTrajectory_Request * msg)
{
  if (msg) {
    crazyflie_interfaces__srv__StartTrajectory_Request__fini(msg);
  }
  free(msg);
}


bool
crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__init(crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_interfaces__srv__StartTrajectory_Request * data = NULL;
  if (size) {
    data = (crazyflie_interfaces__srv__StartTrajectory_Request *)calloc(size, sizeof(crazyflie_interfaces__srv__StartTrajectory_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__srv__StartTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__srv__StartTrajectory_Request__fini(&data[i - 1]);
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
crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__fini(crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_interfaces__srv__StartTrajectory_Request__fini(&array->data[i]);
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

crazyflie_interfaces__srv__StartTrajectory_Request__Sequence *
crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__create(size_t size)
{
  crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * array = (crazyflie_interfaces__srv__StartTrajectory_Request__Sequence *)malloc(sizeof(crazyflie_interfaces__srv__StartTrajectory_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__destroy(crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * array)
{
  if (array) {
    crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__are_equal(const crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * lhs, const crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__srv__StartTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__srv__StartTrajectory_Request__Sequence__copy(
  const crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * input,
  crazyflie_interfaces__srv__StartTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__srv__StartTrajectory_Request);
    crazyflie_interfaces__srv__StartTrajectory_Request * data =
      (crazyflie_interfaces__srv__StartTrajectory_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__srv__StartTrajectory_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__srv__StartTrajectory_Request__fini(&data[i]);
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
    if (!crazyflie_interfaces__srv__StartTrajectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
crazyflie_interfaces__srv__StartTrajectory_Response__init(crazyflie_interfaces__srv__StartTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
crazyflie_interfaces__srv__StartTrajectory_Response__fini(crazyflie_interfaces__srv__StartTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
crazyflie_interfaces__srv__StartTrajectory_Response__are_equal(const crazyflie_interfaces__srv__StartTrajectory_Response * lhs, const crazyflie_interfaces__srv__StartTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__srv__StartTrajectory_Response__copy(
  const crazyflie_interfaces__srv__StartTrajectory_Response * input,
  crazyflie_interfaces__srv__StartTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

crazyflie_interfaces__srv__StartTrajectory_Response *
crazyflie_interfaces__srv__StartTrajectory_Response__create()
{
  crazyflie_interfaces__srv__StartTrajectory_Response * msg = (crazyflie_interfaces__srv__StartTrajectory_Response *)malloc(sizeof(crazyflie_interfaces__srv__StartTrajectory_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__srv__StartTrajectory_Response));
  bool success = crazyflie_interfaces__srv__StartTrajectory_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__srv__StartTrajectory_Response__destroy(crazyflie_interfaces__srv__StartTrajectory_Response * msg)
{
  if (msg) {
    crazyflie_interfaces__srv__StartTrajectory_Response__fini(msg);
  }
  free(msg);
}


bool
crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__init(crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_interfaces__srv__StartTrajectory_Response * data = NULL;
  if (size) {
    data = (crazyflie_interfaces__srv__StartTrajectory_Response *)calloc(size, sizeof(crazyflie_interfaces__srv__StartTrajectory_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__srv__StartTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__srv__StartTrajectory_Response__fini(&data[i - 1]);
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
crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__fini(crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_interfaces__srv__StartTrajectory_Response__fini(&array->data[i]);
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

crazyflie_interfaces__srv__StartTrajectory_Response__Sequence *
crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__create(size_t size)
{
  crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * array = (crazyflie_interfaces__srv__StartTrajectory_Response__Sequence *)malloc(sizeof(crazyflie_interfaces__srv__StartTrajectory_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__destroy(crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * array)
{
  if (array) {
    crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__are_equal(const crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * lhs, const crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__srv__StartTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__srv__StartTrajectory_Response__Sequence__copy(
  const crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * input,
  crazyflie_interfaces__srv__StartTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__srv__StartTrajectory_Response);
    crazyflie_interfaces__srv__StartTrajectory_Response * data =
      (crazyflie_interfaces__srv__StartTrajectory_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__srv__StartTrajectory_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__srv__StartTrajectory_Response__fini(&data[i]);
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
    if (!crazyflie_interfaces__srv__StartTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
