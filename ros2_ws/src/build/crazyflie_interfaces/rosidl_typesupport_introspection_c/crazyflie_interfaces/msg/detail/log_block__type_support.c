// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crazyflie_interfaces:msg/LogBlock.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crazyflie_interfaces/msg/detail/log_block__rosidl_typesupport_introspection_c.h"
#include "crazyflie_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crazyflie_interfaces/msg/detail/log_block__functions.h"
#include "crazyflie_interfaces/msg/detail/log_block__struct.h"


// Include directives for member types
// Member `topic_name`
// Member `variables`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LogBlock__rosidl_typesupport_introspection_c__LogBlock_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crazyflie_interfaces__msg__LogBlock__init(message_memory);
}

void LogBlock__rosidl_typesupport_introspection_c__LogBlock_fini_function(void * message_memory)
{
  crazyflie_interfaces__msg__LogBlock__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_member_array[3] = {
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazyflie_interfaces__msg__LogBlock, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazyflie_interfaces__msg__LogBlock, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variables",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazyflie_interfaces__msg__LogBlock, variables),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_members = {
  "crazyflie_interfaces__msg",  // message namespace
  "LogBlock",  // message name
  3,  // number of fields
  sizeof(crazyflie_interfaces__msg__LogBlock),
  LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_member_array,  // message members
  LogBlock__rosidl_typesupport_introspection_c__LogBlock_init_function,  // function to initialize message memory (memory has to be allocated)
  LogBlock__rosidl_typesupport_introspection_c__LogBlock_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_type_support_handle = {
  0,
  &LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crazyflie_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, msg, LogBlock)() {
  if (!LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_type_support_handle.typesupport_identifier) {
    LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LogBlock__rosidl_typesupport_introspection_c__LogBlock_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
