// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_turtle_msg_interface:msg/Numbers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_turtle_msg_interface/msg/numbers.hpp"


#ifndef MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__TRAITS_HPP_
#define MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_turtle_msg_interface/msg/detail/numbers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_turtle_msg_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Numbers & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Numbers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Numbers & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_turtle_msg_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_turtle_msg_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_turtle_msg_interface::msg::Numbers & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_turtle_msg_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_turtle_msg_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_turtle_msg_interface::msg::Numbers & msg)
{
  return my_turtle_msg_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_turtle_msg_interface::msg::Numbers>()
{
  return "my_turtle_msg_interface::msg::Numbers";
}

template<>
inline const char * name<my_turtle_msg_interface::msg::Numbers>()
{
  return "my_turtle_msg_interface/msg/Numbers";
}

template<>
struct has_fixed_size<my_turtle_msg_interface::msg::Numbers>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_turtle_msg_interface::msg::Numbers>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_turtle_msg_interface::msg::Numbers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__TRAITS_HPP_
