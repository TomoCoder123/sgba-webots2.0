// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__BUILDER_HPP_
#define CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__BUILDER_HPP_

#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_Goal_scan_angle
{
public:
  Init_MultiRangerScan_Goal_scan_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_Goal scan_angle(::crazyflie_ros2_interfaces::action::MultiRangerScan_Goal::_scan_angle_type arg)
  {
    msg_.scan_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_Goal>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_Goal_scan_angle();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_Result_laser_scan
{
public:
  Init_MultiRangerScan_Result_laser_scan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_Result laser_scan(::crazyflie_ros2_interfaces::action::MultiRangerScan_Result::_laser_scan_type arg)
  {
    msg_.laser_scan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_Result>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_Result_laser_scan();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_Feedback_current_angle
{
public:
  Init_MultiRangerScan_Feedback_current_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_Feedback current_angle(::crazyflie_ros2_interfaces::action::MultiRangerScan_Feedback::_current_angle_type arg)
  {
    msg_.current_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_Feedback>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_Feedback_current_angle();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_SendGoal_Request_goal
{
public:
  explicit Init_MultiRangerScan_SendGoal_Request_goal(::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request goal(::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request msg_;
};

class Init_MultiRangerScan_SendGoal_Request_goal_id
{
public:
  Init_MultiRangerScan_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiRangerScan_SendGoal_Request_goal goal_id(::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MultiRangerScan_SendGoal_Request_goal(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Request>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_SendGoal_Request_goal_id();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_SendGoal_Response_stamp
{
public:
  explicit Init_MultiRangerScan_SendGoal_Response_stamp(::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response stamp(::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response msg_;
};

class Init_MultiRangerScan_SendGoal_Response_accepted
{
public:
  Init_MultiRangerScan_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiRangerScan_SendGoal_Response_stamp accepted(::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MultiRangerScan_SendGoal_Response_stamp(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_SendGoal_Response>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_SendGoal_Response_accepted();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_GetResult_Request_goal_id
{
public:
  Init_MultiRangerScan_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Request goal_id(::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Request>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_GetResult_Request_goal_id();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_GetResult_Response_result
{
public:
  explicit Init_MultiRangerScan_GetResult_Response_result(::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response result(::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response msg_;
};

class Init_MultiRangerScan_GetResult_Response_status
{
public:
  Init_MultiRangerScan_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiRangerScan_GetResult_Response_result status(::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MultiRangerScan_GetResult_Response_result(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_GetResult_Response>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_GetResult_Response_status();
}

}  // namespace crazyflie_ros2_interfaces


namespace crazyflie_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_MultiRangerScan_FeedbackMessage_feedback
{
public:
  explicit Init_MultiRangerScan_FeedbackMessage_feedback(::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage feedback(::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage msg_;
};

class Init_MultiRangerScan_FeedbackMessage_goal_id
{
public:
  Init_MultiRangerScan_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiRangerScan_FeedbackMessage_feedback goal_id(::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MultiRangerScan_FeedbackMessage_feedback(msg_);
  }

private:
  ::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_ros2_interfaces::action::MultiRangerScan_FeedbackMessage>()
{
  return crazyflie_ros2_interfaces::action::builder::Init_MultiRangerScan_FeedbackMessage_goal_id();
}

}  // namespace crazyflie_ros2_interfaces

#endif  // CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__BUILDER_HPP_
