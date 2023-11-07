// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#ifndef TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__STRUCT_HPP_
#define TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tennis_court__msg__BallManagerStats __attribute__((deprecated))
#else
# define DEPRECATED__tennis_court__msg__BallManagerStats __declspec(deprecated)
#endif

namespace tennis_court
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallManagerStats_
{
  using Type = BallManagerStats_<ContainerAllocator>;

  explicit BallManagerStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0ll;
      this->current_ball_count = 0l;
      this->total_ball_count = 0l;
    }
  }

  explicit BallManagerStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0ll;
      this->current_ball_count = 0l;
      this->total_ball_count = 0l;
    }
  }

  // field types and members
  using _score_type =
    int64_t;
  _score_type score;
  using _current_ball_count_type =
    int32_t;
  _current_ball_count_type current_ball_count;
  using _total_ball_count_type =
    int32_t;
  _total_ball_count_type total_ball_count;

  // setters for named parameter idiom
  Type & set__score(
    const int64_t & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__current_ball_count(
    const int32_t & _arg)
  {
    this->current_ball_count = _arg;
    return *this;
  }
  Type & set__total_ball_count(
    const int32_t & _arg)
  {
    this->total_ball_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tennis_court::msg::BallManagerStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const tennis_court::msg::BallManagerStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tennis_court::msg::BallManagerStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tennis_court::msg::BallManagerStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tennis_court__msg__BallManagerStats
    std::shared_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tennis_court__msg__BallManagerStats
    std::shared_ptr<tennis_court::msg::BallManagerStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallManagerStats_ & other) const
  {
    if (this->score != other.score) {
      return false;
    }
    if (this->current_ball_count != other.current_ball_count) {
      return false;
    }
    if (this->total_ball_count != other.total_ball_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallManagerStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallManagerStats_

// alias to use template instance with default allocator
using BallManagerStats =
  tennis_court::msg::BallManagerStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tennis_court

#endif  // TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__STRUCT_HPP_
