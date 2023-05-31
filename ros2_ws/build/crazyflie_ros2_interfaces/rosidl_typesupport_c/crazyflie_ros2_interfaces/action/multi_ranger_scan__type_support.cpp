// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_Goal_type_support_ids_t;

static const _MultiRangerScan_Goal_type_support_ids_t _MultiRangerScan_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_Goal_type_support_symbol_names_t _MultiRangerScan_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal)),
  }
};

typedef struct _MultiRangerScan_Goal_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_Goal_type_support_data_t;

static _MultiRangerScan_Goal_type_support_data_t _MultiRangerScan_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_Goal_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Goal)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_Result_type_support_ids_t;

static const _MultiRangerScan_Result_type_support_ids_t _MultiRangerScan_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_Result_type_support_symbol_names_t _MultiRangerScan_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result)),
  }
};

typedef struct _MultiRangerScan_Result_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_Result_type_support_data_t;

static _MultiRangerScan_Result_type_support_data_t _MultiRangerScan_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_Result_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Result)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_Feedback_type_support_ids_t;

static const _MultiRangerScan_Feedback_type_support_ids_t _MultiRangerScan_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_Feedback_type_support_symbol_names_t _MultiRangerScan_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback)),
  }
};

typedef struct _MultiRangerScan_Feedback_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_Feedback_type_support_data_t;

static _MultiRangerScan_Feedback_type_support_data_t _MultiRangerScan_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_Feedback_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_Feedback)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_SendGoal_Request_type_support_ids_t;

static const _MultiRangerScan_SendGoal_Request_type_support_ids_t _MultiRangerScan_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_SendGoal_Request_type_support_symbol_names_t _MultiRangerScan_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Request)),
  }
};

typedef struct _MultiRangerScan_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_SendGoal_Request_type_support_data_t;

static _MultiRangerScan_SendGoal_Request_type_support_data_t _MultiRangerScan_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_SendGoal_Request_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Request)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_SendGoal_Response_type_support_ids_t;

static const _MultiRangerScan_SendGoal_Response_type_support_ids_t _MultiRangerScan_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_SendGoal_Response_type_support_symbol_names_t _MultiRangerScan_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Response)),
  }
};

typedef struct _MultiRangerScan_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_SendGoal_Response_type_support_data_t;

static _MultiRangerScan_SendGoal_Response_type_support_data_t _MultiRangerScan_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_SendGoal_Response_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal_Response)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_SendGoal_type_support_ids_t;

static const _MultiRangerScan_SendGoal_type_support_ids_t _MultiRangerScan_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_SendGoal_type_support_symbol_names_t _MultiRangerScan_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal)),
  }
};

typedef struct _MultiRangerScan_SendGoal_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_SendGoal_type_support_data_t;

static _MultiRangerScan_SendGoal_type_support_data_t _MultiRangerScan_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_SendGoal_service_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MultiRangerScan_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_GetResult_Request_type_support_ids_t;

static const _MultiRangerScan_GetResult_Request_type_support_ids_t _MultiRangerScan_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_GetResult_Request_type_support_symbol_names_t _MultiRangerScan_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Request)),
  }
};

typedef struct _MultiRangerScan_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_GetResult_Request_type_support_data_t;

static _MultiRangerScan_GetResult_Request_type_support_data_t _MultiRangerScan_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_GetResult_Request_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Request)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_GetResult_Response_type_support_ids_t;

static const _MultiRangerScan_GetResult_Response_type_support_ids_t _MultiRangerScan_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_GetResult_Response_type_support_symbol_names_t _MultiRangerScan_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Response)),
  }
};

typedef struct _MultiRangerScan_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_GetResult_Response_type_support_data_t;

static _MultiRangerScan_GetResult_Response_type_support_data_t _MultiRangerScan_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_GetResult_Response_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult_Response)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_GetResult_type_support_ids_t;

static const _MultiRangerScan_GetResult_type_support_ids_t _MultiRangerScan_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_GetResult_type_support_symbol_names_t _MultiRangerScan_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult)),
  }
};

typedef struct _MultiRangerScan_GetResult_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_GetResult_type_support_data_t;

static _MultiRangerScan_GetResult_type_support_data_t _MultiRangerScan_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_GetResult_service_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MultiRangerScan_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_ros2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MultiRangerScan_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiRangerScan_FeedbackMessage_type_support_ids_t;

static const _MultiRangerScan_FeedbackMessage_type_support_ids_t _MultiRangerScan_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MultiRangerScan_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiRangerScan_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiRangerScan_FeedbackMessage_type_support_symbol_names_t _MultiRangerScan_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_ros2_interfaces, action, MultiRangerScan_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_ros2_interfaces, action, MultiRangerScan_FeedbackMessage)),
  }
};

typedef struct _MultiRangerScan_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MultiRangerScan_FeedbackMessage_type_support_data_t;

static _MultiRangerScan_FeedbackMessage_type_support_data_t _MultiRangerScan_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MultiRangerScan_FeedbackMessage_message_typesupport_map = {
  2,
  "crazyflie_ros2_interfaces",
  &_MultiRangerScan_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MultiRangerScan_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MultiRangerScan_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MultiRangerScan_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiRangerScan_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crazyflie_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_FeedbackMessage)() {
  return &::crazyflie_ros2_interfaces::action::rosidl_typesupport_c::MultiRangerScan_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "crazyflie_ros2_interfaces/action/multi_ranger_scan.h"
#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__type_support.h"

static rosidl_action_type_support_t _crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_crazyflie_ros2_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan)()
{
  // Thread-safe by always writing the same values to the static struct
  _crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_SendGoal)();
  _crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_GetResult)();
  _crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, crazyflie_ros2_interfaces, action, MultiRangerScan_FeedbackMessage)();
  _crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_crazyflie_ros2_interfaces__action__MultiRangerScan__typesupport_c;
}

#ifdef __cplusplus
}
#endif
