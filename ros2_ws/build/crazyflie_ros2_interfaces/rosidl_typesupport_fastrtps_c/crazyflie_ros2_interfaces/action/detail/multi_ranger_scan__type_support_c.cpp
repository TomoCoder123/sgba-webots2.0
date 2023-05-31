// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
// generated code does not contain a copyright notice
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MultiRangerScan_Goal__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_Goal;

static bool _MultiRangerScan_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_Goal__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: scan_angle
  {
    cdr << ros_message->scan_angle;
  }

  return true;
}

static bool _MultiRangerScan_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_Goal__ros_msg_type * ros_message = static_cast<_MultiRangerScan_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: scan_angle
  {
    cdr >> ros_message->scan_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_Goal__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name scan_angle
  {
    size_t item_size = sizeof(ros_message->scan_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: scan_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_Goal = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_Goal",
  _MultiRangerScan_Goal__cdr_serialize,
  _MultiRangerScan_Goal__cdr_deserialize,
  _MultiRangerScan_Goal__get_serialized_size,
  _MultiRangerScan_Goal__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal)() {
  return &_MultiRangerScan_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // laser_scan
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // laser_scan

// forward declare type support functions


using _MultiRangerScan_Result__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_Result;

static bool _MultiRangerScan_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_Result__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_scan
  {
    size_t size = ros_message->laser_scan.size;
    auto array_ptr = ros_message->laser_scan.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MultiRangerScan_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_Result__ros_msg_type * ros_message = static_cast<_MultiRangerScan_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_scan
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->laser_scan.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->laser_scan);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->laser_scan, size)) {
      fprintf(stderr, "failed to create array for field 'laser_scan'");
      return false;
    }
    auto array_ptr = ros_message->laser_scan.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_Result__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laser_scan
  {
    size_t array_size = ros_message->laser_scan.size;
    auto array_ptr = ros_message->laser_scan.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: laser_scan
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_Result = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_Result",
  _MultiRangerScan_Result__cdr_serialize,
  _MultiRangerScan_Result__cdr_deserialize,
  _MultiRangerScan_Result__get_serialized_size,
  _MultiRangerScan_Result__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result)() {
  return &_MultiRangerScan_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MultiRangerScan_Feedback__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback;

static bool _MultiRangerScan_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_Feedback__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: current_angle
  {
    cdr << ros_message->current_angle;
  }

  return true;
}

static bool _MultiRangerScan_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_Feedback__ros_msg_type * ros_message = static_cast<_MultiRangerScan_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: current_angle
  {
    cdr >> ros_message->current_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_Feedback__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_angle
  {
    size_t item_size = sizeof(ros_message->current_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_Feedback = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_Feedback",
  _MultiRangerScan_Feedback__cdr_serialize,
  _MultiRangerScan_Feedback__cdr_deserialize,
  _MultiRangerScan_Feedback__get_serialized_size,
  _MultiRangerScan_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback)() {
  return &_MultiRangerScan_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _MultiRangerScan_SendGoal_Request__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request;

static bool _MultiRangerScan_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MultiRangerScan_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_SendGoal_Request__ros_msg_type * ros_message = static_cast<_MultiRangerScan_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_SendGoal_Request = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_SendGoal_Request",
  _MultiRangerScan_SendGoal_Request__cdr_serialize,
  _MultiRangerScan_SendGoal_Request__cdr_deserialize,
  _MultiRangerScan_SendGoal_Request__get_serialized_size,
  _MultiRangerScan_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Request)() {
  return &_MultiRangerScan_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _MultiRangerScan_SendGoal_Response__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response;

static bool _MultiRangerScan_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MultiRangerScan_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_SendGoal_Response__ros_msg_type * ros_message = static_cast<_MultiRangerScan_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_SendGoal_Response = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_SendGoal_Response",
  _MultiRangerScan_SendGoal_Response__cdr_serialize,
  _MultiRangerScan_SendGoal_Response__cdr_deserialize,
  _MultiRangerScan_SendGoal_Response__get_serialized_size,
  _MultiRangerScan_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Response)() {
  return &_MultiRangerScan_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crazyflie_ros2_interfaces/action/multi_ranger_scan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MultiRangerScan_SendGoal__callbacks = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Response)(),
};

static rosidl_service_type_support_t MultiRangerScan_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MultiRangerScan_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal)() {
  return &MultiRangerScan_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _MultiRangerScan_GetResult_Request__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request;

static bool _MultiRangerScan_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_GetResult_Request__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MultiRangerScan_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_GetResult_Request__ros_msg_type * ros_message = static_cast<_MultiRangerScan_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_GetResult_Request__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_GetResult_Request = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_GetResult_Request",
  _MultiRangerScan_GetResult_Request__cdr_serialize,
  _MultiRangerScan_GetResult_Request__cdr_deserialize,
  _MultiRangerScan_GetResult_Request__get_serialized_size,
  _MultiRangerScan_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Request)() {
  return &_MultiRangerScan_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result)();


using _MultiRangerScan_GetResult_Response__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response;

static bool _MultiRangerScan_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_GetResult_Response__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MultiRangerScan_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_GetResult_Response__ros_msg_type * ros_message = static_cast<_MultiRangerScan_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_GetResult_Response__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_GetResult_Response = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_GetResult_Response",
  _MultiRangerScan_GetResult_Response__cdr_serialize,
  _MultiRangerScan_GetResult_Response__cdr_deserialize,
  _MultiRangerScan_GetResult_Response__get_serialized_size,
  _MultiRangerScan_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Response)() {
  return &_MultiRangerScan_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/multi_ranger_scan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MultiRangerScan_GetResult__callbacks = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Response)(),
};

static rosidl_service_type_support_t MultiRangerScan_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MultiRangerScan_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult)() {
  return &MultiRangerScan_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _MultiRangerScan_FeedbackMessage__ros_msg_type = crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage;

static bool _MultiRangerScan_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiRangerScan_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MultiRangerScan_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiRangerScan_FeedbackMessage__ros_msg_type * ros_message = static_cast<_MultiRangerScan_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRangerScan_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _MultiRangerScan_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiRangerScan_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_ros2_interfaces
size_t max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiRangerScan_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiRangerScan_FeedbackMessage = {
  "crazyflie_ros2_interfaces::action",
  "MultiRangerScan_FeedbackMessage",
  _MultiRangerScan_FeedbackMessage__cdr_serialize,
  _MultiRangerScan_FeedbackMessage__cdr_deserialize,
  _MultiRangerScan_FeedbackMessage__get_serialized_size,
  _MultiRangerScan_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _MultiRangerScan_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRangerScan_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_FeedbackMessage)() {
  return &_MultiRangerScan_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
