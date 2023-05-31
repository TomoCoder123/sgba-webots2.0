// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__GO_TO__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__GO_TO__TRAITS_HPP_

#include "crazyflie_interfaces/srv/detail/go_to__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'goal'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::GoTo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_mask: ";
    value_to_yaml(msg.group_mask, out);
    out << "\n";
  }

  // member: relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative: ";
    value_to_yaml(msg.relative, out);
    out << "\n";
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_yaml(msg.duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::GoTo_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::GoTo_Request>()
{
  return "crazyflie_interfaces::srv::GoTo_Request";
}

template<>
inline const char * name<crazyflie_interfaces::srv::GoTo_Request>()
{
  return "crazyflie_interfaces/srv/GoTo_Request";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::GoTo_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::GoTo_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<crazyflie_interfaces::srv::GoTo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::GoTo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::GoTo_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::GoTo_Response>()
{
  return "crazyflie_interfaces::srv::GoTo_Response";
}

template<>
inline const char * name<crazyflie_interfaces::srv::GoTo_Response>()
{
  return "crazyflie_interfaces/srv/GoTo_Response";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazyflie_interfaces::srv::GoTo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crazyflie_interfaces::srv::GoTo>()
{
  return "crazyflie_interfaces::srv::GoTo";
}

template<>
inline const char * name<crazyflie_interfaces::srv::GoTo>()
{
  return "crazyflie_interfaces/srv/GoTo";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::GoTo>
  : std::integral_constant<
    bool,
    has_fixed_size<crazyflie_interfaces::srv::GoTo_Request>::value &&
    has_fixed_size<crazyflie_interfaces::srv::GoTo_Response>::value
  >
{
};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::GoTo>
  : std::integral_constant<
    bool,
    has_bounded_size<crazyflie_interfaces::srv::GoTo_Request>::value &&
    has_bounded_size<crazyflie_interfaces::srv::GoTo_Response>::value
  >
{
};

template<>
struct is_service<crazyflie_interfaces::srv::GoTo>
  : std::true_type
{
};

template<>
struct is_service_request<crazyflie_interfaces::srv::GoTo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crazyflie_interfaces::srv::GoTo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__GO_TO__TRAITS_HPP_
