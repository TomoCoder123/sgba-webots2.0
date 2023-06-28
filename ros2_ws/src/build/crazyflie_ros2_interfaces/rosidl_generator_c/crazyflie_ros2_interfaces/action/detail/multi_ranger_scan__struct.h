// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__STRUCT_H_
#define CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_Goal
{
  float scan_angle;
} crazyflie_ros2_interfaces__action__MultiRangerScan_Goal;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_Goal.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'laser_scan'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_Result
{
  rosidl_runtime_c__float__Sequence laser_scan;
} crazyflie_ros2_interfaces__action__MultiRangerScan_Result;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_Result.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence;


// Constants defined in the message

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback
{
  float current_angle;
} crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal goal;
} crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response
{
  int8_t status;
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result result;
} crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"

// Struct defined in action/MultiRangerScan in the package crazyflie_ros2_interfaces.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback feedback;
} crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage;

// Struct for a sequence of crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage.
typedef struct crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence
{
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__STRUCT_H_
