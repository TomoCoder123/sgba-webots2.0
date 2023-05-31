// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:srv/SetGroupMask.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__SET_GROUP_MASK__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__SET_GROUP_MASK__TRAITS_HPP_

#include "crazyflie_interfaces/srv/detail/set_group_mask__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::SetGroupMask_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::SetGroupMask_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::SetGroupMask_Request>()
{
  return "crazyflie_interfaces::srv::SetGroupMask_Request";
}

template<>
inline const char * name<crazyflie_interfaces::srv::SetGroupMask_Request>()
{
  return "crazyflie_interfaces/srv/SetGroupMask_Request";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::SetGroupMask_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::SetGroupMask_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazyflie_interfaces::srv::SetGroupMask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::SetGroupMask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::SetGroupMask_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::SetGroupMask_Response>()
{
  return "crazyflie_interfaces::srv::SetGroupMask_Response";
}

template<>
inline const char * name<crazyflie_interfaces::srv::SetGroupMask_Response>()
{
  return "crazyflie_interfaces/srv/SetGroupMask_Response";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::SetGroupMask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::SetGroupMask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazyflie_interfaces::srv::SetGroupMask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crazyflie_interfaces::srv::SetGroupMask>()
{
  return "crazyflie_interfaces::srv::SetGroupMask";
}

template<>
inline const char * name<crazyflie_interfaces::srv::SetGroupMask>()
{
  return "crazyflie_interfaces/srv/SetGroupMask";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::SetGroupMask>
  : std::integral_constant<
    bool,
    has_fixed_size<crazyflie_interfaces::srv::SetGroupMask_Request>::value &&
    has_fixed_size<crazyflie_interfaces::srv::SetGroupMask_Response>::value
  >
{
};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::SetGroupMask>
  : std::integral_constant<
    bool,
    has_bounded_size<crazyflie_interfaces::srv::SetGroupMask_Request>::value &&
    has_bounded_size<crazyflie_interfaces::srv::SetGroupMask_Response>::value
  >
{
};

template<>
struct is_service<crazyflie_interfaces::srv::SetGroupMask>
  : std::true_type
{
};

template<>
struct is_service_request<crazyflie_interfaces::srv::SetGroupMask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crazyflie_interfaces::srv::SetGroupMask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__SET_GROUP_MASK__TRAITS_HPP_
