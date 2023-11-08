// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#ifndef TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__BUILDER_HPP_
#define TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tennis_court/msg/detail/ball_manager_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tennis_court
{

namespace msg
{

namespace builder
{

class Init_BallManagerStats_total_ball_count
{
public:
  explicit Init_BallManagerStats_total_ball_count(::tennis_court::msg::BallManagerStats & msg)
  : msg_(msg)
  {}
  ::tennis_court::msg::BallManagerStats total_ball_count(::tennis_court::msg::BallManagerStats::_total_ball_count_type arg)
  {
    msg_.total_ball_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tennis_court::msg::BallManagerStats msg_;
};

class Init_BallManagerStats_current_ball_count
{
public:
  explicit Init_BallManagerStats_current_ball_count(::tennis_court::msg::BallManagerStats & msg)
  : msg_(msg)
  {}
  Init_BallManagerStats_total_ball_count current_ball_count(::tennis_court::msg::BallManagerStats::_current_ball_count_type arg)
  {
    msg_.current_ball_count = std::move(arg);
    return Init_BallManagerStats_total_ball_count(msg_);
  }

private:
  ::tennis_court::msg::BallManagerStats msg_;
};

class Init_BallManagerStats_score
{
public:
  Init_BallManagerStats_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallManagerStats_current_ball_count score(::tennis_court::msg::BallManagerStats::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_BallManagerStats_current_ball_count(msg_);
  }

private:
  ::tennis_court::msg::BallManagerStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tennis_court::msg::BallManagerStats>()
{
  return tennis_court::msg::builder::Init_BallManagerStats_score();
}

}  // namespace tennis_court

#endif  // TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__BUILDER_HPP_
