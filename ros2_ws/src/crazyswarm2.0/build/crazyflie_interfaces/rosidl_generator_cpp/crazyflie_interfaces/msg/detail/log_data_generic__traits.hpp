// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:msg/LogDataGeneric.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__LOG_DATA_GENERIC__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__LOG_DATA_GENERIC__TRAITS_HPP_

#include "crazyflie_interfaces/msg/detail/log_data_generic__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::msg::LogDataGeneric & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
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

inline std::string to_yaml(const crazyflie_interfaces::msg::LogDataGeneric & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::msg::LogDataGeneric>()
{
  return "crazyflie_interfaces::msg::LogDataGeneric";
}

template<>
inline const char * name<crazyflie_interfaces::msg::LogDataGeneric>()
{
  return "crazyflie_interfaces/msg/LogDataGeneric";
}

template<>
struct has_fixed_size<crazyflie_interfaces::msg::LogDataGeneric>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crazyflie_interfaces::msg::LogDataGeneric>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crazyflie_interfaces::msg::LogDataGeneric>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__LOG_DATA_GENERIC__TRAITS_HPP_
