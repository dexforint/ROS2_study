// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_turtle_msg_interface:msg/Numbers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_turtle_msg_interface/msg/numbers.hpp"


#ifndef MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__BUILDER_HPP_
#define MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_turtle_msg_interface/msg/detail/numbers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_turtle_msg_interface
{

namespace msg
{

namespace builder
{

class Init_Numbers_b
{
public:
  explicit Init_Numbers_b(::my_turtle_msg_interface::msg::Numbers & msg)
  : msg_(msg)
  {}
  ::my_turtle_msg_interface::msg::Numbers b(::my_turtle_msg_interface::msg::Numbers::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_turtle_msg_interface::msg::Numbers msg_;
};

class Init_Numbers_a
{
public:
  Init_Numbers_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Numbers_b a(::my_turtle_msg_interface::msg::Numbers::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Numbers_b(msg_);
  }

private:
  ::my_turtle_msg_interface::msg::Numbers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_turtle_msg_interface::msg::Numbers>()
{
  return my_turtle_msg_interface::msg::builder::Init_Numbers_a();
}

}  // namespace my_turtle_msg_interface

#endif  // MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__BUILDER_HPP_
