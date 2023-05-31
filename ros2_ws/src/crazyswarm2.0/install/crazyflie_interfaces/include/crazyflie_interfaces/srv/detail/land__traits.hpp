// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:srv/Land.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__LAND__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__LAND__TRAITS_HPP_

#include "crazyflie_interfaces/srv/detail/land__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::Land_Request & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
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

inline std::string to_yaml(const crazyflie_interfaces::srv::Land_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::Land_Request>()
{
  return "crazyflie_interfaces::srv::Land_Request";
}

template<>
inline const char * name<crazyflie_interfaces::srv::Land_Request>()
{
  return "crazyflie_interfaces/srv/Land_Request";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::Land_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::Land_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<crazyflie_interfaces::srv::Land_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::Land_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::Land_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::Land_Response>()
{
  return "crazyflie_interfaces::srv::Land_Response";
}

template<>
inline const char * name<crazyflie_interfaces::srv::Land_Response>()
{
  return "crazyflie_interfaces/srv/Land_Response";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::Land_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::Land_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazyflie_interfaces::srv::Land_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crazyflie_interfaces::srv::Land>()
{
  return "crazyflie_interfaces::srv::Land";
}

template<>
inline const char * name<crazyflie_interfaces::srv::Land>()
{
  return "crazyflie_interfaces/srv/Land";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::Land>
  : std::integral_constant<
    bool,
    has_fixed_size<crazyflie_interfaces::srv::Land_Request>::value &&
    has_fixed_size<crazyflie_interfaces::srv::Land_Response>::value
  >
{
};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::Land>
  : std::integral_constant<
    bool,
    has_bounded_size<crazyflie_interfaces::srv::Land_Request>::value &&
    has_bounded_size<crazyflie_interfaces::srv::Land_Response>::value
  >
{
};

template<>
struct is_service<crazyflie_interfaces::srv::Land>
  : std::true_type
{
};

template<>
struct is_service_request<crazyflie_interfaces::srv::Land_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crazyflie_interfaces::srv::Land_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__LAND__TRAITS_HPP_
