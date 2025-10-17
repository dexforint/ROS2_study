// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from my_turtle_msg_interface:msg/Numbers.idl
// generated code does not contain a copyright notice
#ifndef MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_turtle_msg_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_turtle_msg_interface/msg/detail/numbers__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
bool cdr_serialize_my_turtle_msg_interface__msg__Numbers(
  const my_turtle_msg_interface__msg__Numbers * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
bool cdr_deserialize_my_turtle_msg_interface__msg__Numbers(
  eprosima::fastcdr::Cdr &,
  my_turtle_msg_interface__msg__Numbers * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
size_t get_serialized_size_my_turtle_msg_interface__msg__Numbers(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
size_t max_serialized_size_my_turtle_msg_interface__msg__Numbers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
bool cdr_serialize_key_my_turtle_msg_interface__msg__Numbers(
  const my_turtle_msg_interface__msg__Numbers * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
size_t get_serialized_size_key_my_turtle_msg_interface__msg__Numbers(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
size_t max_serialized_size_key_my_turtle_msg_interface__msg__Numbers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_turtle_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_turtle_msg_interface, msg, Numbers)();

#ifdef __cplusplus
}
#endif

#endif  // MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
