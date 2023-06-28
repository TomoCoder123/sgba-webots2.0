// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from crazyflie_interfaces:srv/AddLogging.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/srv/detail/add_logging__rosidl_typesupport_fastrtps_cpp.hpp"
#include "crazyflie_interfaces/srv/detail/add_logging__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crazyflie_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
cdr_serialize(
  const crazyflie_interfaces::srv::AddLogging_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic_name
  cdr << ros_message.topic_name;
  // Member: frequency
  cdr << ros_message.frequency;
  // Member: vars
  {
    cdr << ros_message.vars;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crazyflie_interfaces::srv::AddLogging_Request & ros_message)
{
  // Member: topic_name
  cdr >> ros_message.topic_name;

  // Member: frequency
  cdr >> ros_message.frequency;

  // Member: vars
  {
    cdr >> ros_message.vars;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
get_serialized_size(
  const crazyflie_interfaces::srv::AddLogging_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic_name.size() + 1);
  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vars
  {
    size_t array_size = ros_message.vars.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.vars[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
max_serialized_size_AddLogging_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: topic_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vars
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AddLogging_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crazyflie_interfaces::srv::AddLogging_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddLogging_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crazyflie_interfaces::srv::AddLogging_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddLogging_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crazyflie_interfaces::srv::AddLogging_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddLogging_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddLogging_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AddLogging_Request__callbacks = {
  "crazyflie_interfaces::srv",
  "AddLogging_Request",
  _AddLogging_Request__cdr_serialize,
  _AddLogging_Request__cdr_deserialize,
  _AddLogging_Request__get_serialized_size,
  _AddLogging_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddLogging_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddLogging_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crazyflie_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<crazyflie_interfaces::srv::AddLogging_Request>()
{
  return &crazyflie_interfaces::srv::typesupport_fastrtps_cpp::_AddLogging_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, AddLogging_Request)() {
  return &crazyflie_interfaces::srv::typesupport_fastrtps_cpp::_AddLogging_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crazyflie_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
cdr_serialize(
  const crazyflie_interfaces::srv::AddLogging_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crazyflie_interfaces::srv::AddLogging_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
get_serialized_size(
  const crazyflie_interfaces::srv::AddLogging_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crazyflie_interfaces
max_serialized_size_AddLogging_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AddLogging_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crazyflie_interfaces::srv::AddLogging_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddLogging_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crazyflie_interfaces::srv::AddLogging_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddLogging_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crazyflie_interfaces::srv::AddLogging_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddLogging_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddLogging_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AddLogging_Response__callbacks = {
  "crazyflie_interfaces::srv",
  "AddLogging_Response",
  _AddLogging_Response__cdr_serialize,
  _AddLogging_Response__cdr_deserialize,
  _AddLogging_Response__get_serialized_size,
  _AddLogging_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddLogging_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddLogging_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crazyflie_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<crazyflie_interfaces::srv::AddLogging_Response>()
{
  return &crazyflie_interfaces::srv::typesupport_fastrtps_cpp::_AddLogging_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, AddLogging_Response)() {
  return &crazyflie_interfaces::srv::typesupport_fastrtps_cpp::_AddLogging_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace crazyflie_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AddLogging__callbacks = {
  "crazyflie_interfaces::srv",
  "AddLogging",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, AddLogging_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, AddLogging_Response)(),
};

static rosidl_service_type_support_t _AddLogging__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddLogging__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crazyflie_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<crazyflie_interfaces::srv::AddLogging>()
{
  return &crazyflie_interfaces::srv::typesupport_fastrtps_cpp::_AddLogging__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, AddLogging)() {
  return &crazyflie_interfaces::srv::typesupport_fastrtps_cpp::_AddLogging__handle;
}

#ifdef __cplusplus
}
#endif
