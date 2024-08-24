// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_msgs:msg/SteeringAngle.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__STRUCT_HPP_
#define UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_msgs__msg__SteeringAngle __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_msgs__msg__SteeringAngle __declspec(deprecated)
#endif

namespace unity_robotics_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringAngle_
{
  using Type = SteeringAngle_<ContainerAllocator>;

  explicit SteeringAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  explicit SteeringAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _w_type =
    double;
  _w_type w;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__w(
    const double & _arg)
  {
    this->w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_msgs__msg__SteeringAngle
    std::shared_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_msgs__msg__SteeringAngle
    std::shared_ptr<unity_robotics_msgs::msg::SteeringAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringAngle_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringAngle_

// alias to use template instance with default allocator
using SteeringAngle =
  unity_robotics_msgs::msg::SteeringAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_msgs

#endif  // UNITY_ROBOTICS_MSGS__MSG__DETAIL__STEERING_ANGLE__STRUCT_HPP_
