// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
// generated code does not contain a copyright notice
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // scan_angle
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg)
{
  if (!msg) {
    return;
  }
  // scan_angle
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scan_angle
  if (lhs->scan_angle != rhs->scan_angle) {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // scan_angle
  output->scan_angle = input->scan_angle;
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_Goal *
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_Goal *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_Goal *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal);
    crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `laser_scan`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg)
{
  if (!msg) {
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__float__Sequence__init(&msg->laser_scan, 0)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg)
{
  if (!msg) {
    return;
  }
  // laser_scan
  rosidl_runtime_c__float__Sequence__fini(&msg->laser_scan);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Result * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->laser_scan), &(rhs->laser_scan)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Result * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->laser_scan), &(output->laser_scan)))
  {
    return false;
  }
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_Result *
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_Result *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Result));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_Result *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Result);
    crazyflie_ros2_interfaces__action__MultiRangerScan_Result * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_angle
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_angle
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_angle
  if (lhs->current_angle != rhs->current_angle) {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_angle
  output->current_angle = input->current_angle;
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback *
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback);
    crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init(&msg->goal)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(&msg->goal);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request);
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response);
    crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request);
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init(&msg->result)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(&msg->result);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response);
    crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init(&msg->feedback)) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(&msg->feedback);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage *
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__create()
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg = (crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage));
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg)
{
  if (msg) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * data = NULL;
  if (size) {
    data = (crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage *)calloc(size, sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(&data[i - 1]);
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
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(&array->data[i]);
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

crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__create(size_t size)
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array = (crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence *)malloc(sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array)
{
  if (array) {
    crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage);
    crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * data =
      (crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(&data[i]);
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
    if (!crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
