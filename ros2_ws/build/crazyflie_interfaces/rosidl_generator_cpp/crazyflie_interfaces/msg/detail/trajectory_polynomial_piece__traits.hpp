// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:msg/TrajectoryPolynomialPiece.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__TRAJECTORY_POLYNOMIAL_PIECE__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__TRAJECTORY_POLYNOMIAL_PIECE__TRAITS_HPP_

#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__struct.hpp"
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
  const crazyflie_interfaces::msg::TrajectoryPolynomialPiece & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poly_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_x.size() == 0) {
      out << "poly_x: []\n";
    } else {
      out << "poly_x:\n";
      for (auto item : msg.poly_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_y.size() == 0) {
      out << "poly_y: []\n";
    } else {
      out << "poly_y:\n";
      for (auto item : msg.poly_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_z.size() == 0) {
      out << "poly_z: []\n";
    } else {
      out << "poly_z:\n";
      for (auto item : msg.poly_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_yaw.size() == 0) {
      out << "poly_yaw: []\n";
    } else {
      out << "poly_yaw:\n";
      for (auto item : msg.poly_yaw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const crazyflie_interfaces::msg::TrajectoryPolynomialPiece & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::msg::TrajectoryPolynomialPiece>()
{
  return "crazyflie_interfaces::msg::TrajectoryPolynomialPiece";
}

template<>
inline const char * name<crazyflie_interfaces::msg::TrajectoryPolynomialPiece>()
{
  return "crazyflie_interfaces/msg/TrajectoryPolynomialPiece";
}

template<>
struct has_fixed_size<crazyflie_interfaces::msg::TrajectoryPolynomialPiece>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crazyflie_interfaces::msg::TrajectoryPolynomialPiece>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crazyflie_interfaces::msg::TrajectoryPolynomialPiece>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__TRAJECTORY_POLYNOMIAL_PIECE__TRAITS_HPP_
