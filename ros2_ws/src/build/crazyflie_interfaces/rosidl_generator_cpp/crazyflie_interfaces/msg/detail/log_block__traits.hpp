// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:msg/LogBlock.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__LOG_BLOCK__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__LOG_BLOCK__TRAITS_HPP_

#include "crazyflie_interfaces/msg/detail/log_block__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::msg::LogBlock & msg,
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

  // member: variables
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.variables.size() == 0) {
      out << "variables: []\n";
    } else {
      out << "variables:\n";
      for (auto item : msg.variables) {
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

inline std::string to_yaml(const crazyflie_interfaces::msg::LogBlock & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::msg::LogBlock>()
{
  return "crazyflie_interfaces::msg::LogBlock";
}

template<>
inline const char * name<crazyflie_interfaces::msg::LogBlock>()
{
  return "crazyflie_interfaces/msg/LogBlock";
}

template<>
struct has_fixed_size<crazyflie_interfaces::msg::LogBlock>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crazyflie_interfaces::msg::LogBlock>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crazyflie_interfaces::msg::LogBlock>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__LOG_BLOCK__TRAITS_HPP_
