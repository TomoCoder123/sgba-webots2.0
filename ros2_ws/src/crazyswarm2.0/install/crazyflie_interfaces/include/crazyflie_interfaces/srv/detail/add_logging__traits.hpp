// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:srv/AddLogging.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__ADD_LOGGING__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__ADD_LOGGING__TRAITS_HPP_

#include "crazyflie_interfaces/srv/detail/add_logging__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::AddLogging_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: vars
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vars.size() == 0) {
      out << "vars: []\n";
    } else {
      out << "vars:\n";
      for (auto item : msg.vars) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::AddLogging_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::AddLogging_Request>()
{
  return "crazyflie_interfaces::srv::AddLogging_Request";
}

template<>
inline const char * name<crazyflie_interfaces::srv::AddLogging_Request>()
{
  return "crazyflie_interfaces/srv/AddLogging_Request";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::AddLogging_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::AddLogging_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crazyflie_interfaces::srv::AddLogging_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::AddLogging_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::AddLogging_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::AddLogging_Response>()
{
  return "crazyflie_interfaces::srv::AddLogging_Response";
}

template<>
inline const char * name<crazyflie_interfaces::srv::AddLogging_Response>()
{
  return "crazyflie_interfaces/srv/AddLogging_Response";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::AddLogging_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::AddLogging_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazyflie_interfaces::srv::AddLogging_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crazyflie_interfaces::srv::AddLogging>()
{
  return "crazyflie_interfaces::srv::AddLogging";
}

template<>
inline const char * name<crazyflie_interfaces::srv::AddLogging>()
{
  return "crazyflie_interfaces/srv/AddLogging";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::AddLogging>
  : std::integral_constant<
    bool,
    has_fixed_size<crazyflie_interfaces::srv::AddLogging_Request>::value &&
    has_fixed_size<crazyflie_interfaces::srv::AddLogging_Response>::value
  >
{
};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::AddLogging>
  : std::integral_constant<
    bool,
    has_bounded_size<crazyflie_interfaces::srv::AddLogging_Request>::value &&
    has_bounded_size<crazyflie_interfaces::srv::AddLogging_Response>::value
  >
{
};

template<>
struct is_service<crazyflie_interfaces::srv::AddLogging>
  : std::true_type
{
};

template<>
struct is_service_request<crazyflie_interfaces::srv::AddLogging_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crazyflie_interfaces::srv::AddLogging_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__ADD_LOGGING__TRAITS_HPP_
