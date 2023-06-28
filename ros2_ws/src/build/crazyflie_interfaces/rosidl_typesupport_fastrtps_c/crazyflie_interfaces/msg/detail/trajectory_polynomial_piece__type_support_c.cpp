// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crazyflie_interfaces:msg/TrajectoryPolynomialPiece.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crazyflie_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__struct.h"
#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // duration
#include "rosidl_runtime_c/primitives_sequence.h"  // poly_x, poly_y, poly_yaw, poly_z
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // poly_x, poly_y, poly_yaw, poly_z

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crazyflie_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();


using _TrajectoryPolynomialPiece__ros_msg_type = crazyflie_interfaces__msg__TrajectoryPolynomialPiece;

static bool _TrajectoryPolynomialPiece__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryPolynomialPiece__ros_msg_type * ros_message = static_cast<const _TrajectoryPolynomialPiece__ros_msg_type *>(untyped_ros_message);
  // Field name: poly_x
  {
    size_t size = ros_message->poly_x.size;
    auto array_ptr = ros_message->poly_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: poly_y
  {
    size_t size = ros_message->poly_y.size;
    auto array_ptr = ros_message->poly_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: poly_z
  {
    size_t size = ros_message->poly_z.size;
    auto array_ptr = ros_message->poly_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: poly_yaw
  {
    size_t size = ros_message->poly_yaw.size;
    auto array_ptr = ros_message->poly_yaw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: duration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->duration, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryPolynomialPiece__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryPolynomialPiece__ros_msg_type * ros_message = static_cast<_TrajectoryPolynomialPiece__ros_msg_type *>(untyped_ros_message);
  // Field name: poly_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poly_x.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->poly_x);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->poly_x, size)) {
      fprintf(stderr, "failed to create array for field 'poly_x'");
      return false;
    }
    auto array_ptr = ros_message->poly_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: poly_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poly_y.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->poly_y);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->poly_y, size)) {
      fprintf(stderr, "failed to create array for field 'poly_y'");
      return false;
    }
    auto array_ptr = ros_message->poly_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: poly_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poly_z.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->poly_z);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->poly_z, size)) {
      fprintf(stderr, "failed to create array for field 'poly_z'");
      return false;
    }
    auto array_ptr = ros_message->poly_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: poly_yaw
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poly_yaw.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->poly_yaw);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->poly_yaw, size)) {
      fprintf(stderr, "failed to create array for field 'poly_yaw'");
      return false;
    }
    auto array_ptr = ros_message->poly_yaw.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: duration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->duration))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_interfaces
size_t get_serialized_size_crazyflie_interfaces__msg__TrajectoryPolynomialPiece(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryPolynomialPiece__ros_msg_type * ros_message = static_cast<const _TrajectoryPolynomialPiece__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name poly_x
  {
    size_t array_size = ros_message->poly_x.size;
    auto array_ptr = ros_message->poly_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poly_y
  {
    size_t array_size = ros_message->poly_y.size;
    auto array_ptr = ros_message->poly_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poly_z
  {
    size_t array_size = ros_message->poly_z.size;
    auto array_ptr = ros_message->poly_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poly_yaw
  {
    size_t array_size = ros_message->poly_yaw.size;
    auto array_ptr = ros_message->poly_yaw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration

  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->duration), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryPolynomialPiece__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crazyflie_interfaces__msg__TrajectoryPolynomialPiece(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crazyflie_interfaces
size_t max_serialized_size_crazyflie_interfaces__msg__TrajectoryPolynomialPiece(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: poly_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: poly_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: poly_z
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: poly_yaw
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: duration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Duration(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryPolynomialPiece__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crazyflie_interfaces__msg__TrajectoryPolynomialPiece(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryPolynomialPiece = {
  "crazyflie_interfaces::msg",
  "TrajectoryPolynomialPiece",
  _TrajectoryPolynomialPiece__cdr_serialize,
  _TrajectoryPolynomialPiece__cdr_deserialize,
  _TrajectoryPolynomialPiece__get_serialized_size,
  _TrajectoryPolynomialPiece__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryPolynomialPiece__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryPolynomialPiece,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, msg, TrajectoryPolynomialPiece)() {
  return &_TrajectoryPolynomialPiece__type_support;
}

#if defined(__cplusplus)
}
#endif
