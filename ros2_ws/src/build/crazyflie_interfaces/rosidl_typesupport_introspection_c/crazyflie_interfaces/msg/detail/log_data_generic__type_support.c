// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crazyflie_interfaces:msg/LogDataGeneric.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crazyflie_interfaces/msg/detail/log_data_generic__rosidl_typesupport_introspection_c.h"
#include "crazyflie_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crazyflie_interfaces/msg/detail/log_data_generic__functions.h"
#include "crazyflie_interfaces/msg/detail/log_data_generic__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crazyflie_interfaces__msg__LogDataGeneric__init(message_memory);
}

void LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_fini_function(void * message_memory)
{
  crazyflie_interfaces__msg__LogDataGeneric__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazyflie_interfaces__msg__LogDataGeneric, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazyflie_interfaces__msg__LogDataGeneric, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazyflie_interfaces__msg__LogDataGeneric, values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_members = {
  "crazyflie_interfaces__msg",  // message namespace
  "LogDataGeneric",  // message name
  3,  // number of fields
  sizeof(crazyflie_interfaces__msg__LogDataGeneric),
  LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_member_array,  // message members
  LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_init_function,  // function to initialize message memory (memory has to be allocated)
  LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_type_support_handle = {
  0,
  &LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crazyflie_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, msg, LogDataGeneric)() {
  LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_type_support_handle.typesupport_identifier) {
    LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LogDataGeneric__rosidl_typesupport_introspection_c__LogDataGeneric_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
