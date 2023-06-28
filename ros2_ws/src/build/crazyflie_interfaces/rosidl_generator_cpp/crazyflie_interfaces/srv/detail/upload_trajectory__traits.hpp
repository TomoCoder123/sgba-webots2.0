// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazyflie_interfaces:srv/UploadTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__UPLOAD_TRAJECTORY__TRAITS_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__UPLOAD_TRAJECTORY__TRAITS_HPP_

#include "crazyflie_interfaces/srv/detail/upload_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pieces'
#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::UploadTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_id: ";
    value_to_yaml(msg.trajectory_id, out);
    out << "\n";
  }

  // member: piece_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "piece_offset: ";
    value_to_yaml(msg.piece_offset, out);
    out << "\n";
  }

  // member: pieces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pieces.size() == 0) {
      out << "pieces: []\n";
    } else {
      out << "pieces:\n";
      for (auto item : msg.pieces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::UploadTrajectory_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::UploadTrajectory_Request>()
{
  return "crazyflie_interfaces::srv::UploadTrajectory_Request";
}

template<>
inline const char * name<crazyflie_interfaces::srv::UploadTrajectory_Request>()
{
  return "crazyflie_interfaces/srv/UploadTrajectory_Request";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::UploadTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::UploadTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crazyflie_interfaces::srv::UploadTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const crazyflie_interfaces::srv::UploadTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const crazyflie_interfaces::srv::UploadTrajectory_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<crazyflie_interfaces::srv::UploadTrajectory_Response>()
{
  return "crazyflie_interfaces::srv::UploadTrajectory_Response";
}

template<>
inline const char * name<crazyflie_interfaces::srv::UploadTrajectory_Response>()
{
  return "crazyflie_interfaces/srv/UploadTrajectory_Response";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::UploadTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::UploadTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazyflie_interfaces::srv::UploadTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crazyflie_interfaces::srv::UploadTrajectory>()
{
  return "crazyflie_interfaces::srv::UploadTrajectory";
}

template<>
inline const char * name<crazyflie_interfaces::srv::UploadTrajectory>()
{
  return "crazyflie_interfaces/srv/UploadTrajectory";
}

template<>
struct has_fixed_size<crazyflie_interfaces::srv::UploadTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<crazyflie_interfaces::srv::UploadTrajectory_Request>::value &&
    has_fixed_size<crazyflie_interfaces::srv::UploadTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<crazyflie_interfaces::srv::UploadTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<crazyflie_interfaces::srv::UploadTrajectory_Request>::value &&
    has_bounded_size<crazyflie_interfaces::srv::UploadTrajectory_Response>::value
  >
{
};

template<>
struct is_service<crazyflie_interfaces::srv::UploadTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<crazyflie_interfaces::srv::UploadTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crazyflie_interfaces::srv::UploadTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__UPLOAD_TRAJECTORY__TRAITS_HPP_
