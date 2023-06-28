// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motion_capture_tracking_interfaces:msg/NamedPoseArray.idl
// generated code does not contain a copyright notice
#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array__struct.h"
#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array__functions.h"
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

#include "motion_capture_tracking_interfaces/msg/detail/named_pose__functions.h"  // poses
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_motion_capture_tracking_interfaces__msg__NamedPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_motion_capture_tracking_interfaces__msg__NamedPose(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motion_capture_tracking_interfaces, msg, NamedPose)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_capture_tracking_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _NamedPoseArray__ros_msg_type = motion_capture_tracking_interfaces__msg__NamedPoseArray;

static bool _NamedPoseArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NamedPoseArray__ros_msg_type * ros_message = static_cast<const _NamedPoseArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, motion_capture_tracking_interfaces, msg, NamedPose
      )()->data);
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _NamedPoseArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NamedPoseArray__ros_msg_type * ros_message = static_cast<_NamedPoseArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, motion_capture_tracking_interfaces, msg, NamedPose
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poses.data) {
      motion_capture_tracking_interfaces__msg__NamedPose__Sequence__fini(&ros_message->poses);
    }
    if (!motion_capture_tracking_interfaces__msg__NamedPose__Sequence__init(&ros_message->poses, size)) {
      fprintf(stderr, "failed to create array for field 'poses'");
      return false;
    }
    auto array_ptr = ros_message->poses.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t get_serialized_size_motion_capture_tracking_interfaces__msg__NamedPoseArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NamedPoseArray__ros_msg_type * ros_message = static_cast<const _NamedPoseArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_motion_capture_tracking_interfaces__msg__NamedPose(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NamedPoseArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motion_capture_tracking_interfaces__msg__NamedPoseArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_capture_tracking_interfaces
size_t max_serialized_size_motion_capture_tracking_interfaces__msg__NamedPoseArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_motion_capture_tracking_interfaces__msg__NamedPose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NamedPoseArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_motion_capture_tracking_interfaces__msg__NamedPoseArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NamedPoseArray = {
  "motion_capture_tracking_interfaces::msg",
  "NamedPoseArray",
  _NamedPoseArray__cdr_serialize,
  _NamedPoseArray__cdr_deserialize,
  _NamedPoseArray__get_serialized_size,
  _NamedPoseArray__max_serialized_size
};

static rosidl_message_type_support_t _NamedPoseArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NamedPoseArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motion_capture_tracking_interfaces, msg, NamedPoseArray)() {
  return &_NamedPoseArray__type_support;
}

#if defined(__cplusplus)
}
#endif
