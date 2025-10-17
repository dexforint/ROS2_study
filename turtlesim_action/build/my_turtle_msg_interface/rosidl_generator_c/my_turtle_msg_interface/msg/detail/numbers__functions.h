// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_turtle_msg_interface:msg/Numbers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_turtle_msg_interface/msg/numbers.h"


#ifndef MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__FUNCTIONS_H_
#define MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "my_turtle_msg_interface/msg/rosidl_generator_c__visibility_control.h"

#include "my_turtle_msg_interface/msg/detail/numbers__struct.h"

/// Initialize msg/Numbers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_turtle_msg_interface__msg__Numbers
 * )) before or use
 * my_turtle_msg_interface__msg__Numbers__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
bool
my_turtle_msg_interface__msg__Numbers__init(my_turtle_msg_interface__msg__Numbers * msg);

/// Finalize msg/Numbers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
void
my_turtle_msg_interface__msg__Numbers__fini(my_turtle_msg_interface__msg__Numbers * msg);

/// Create msg/Numbers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_turtle_msg_interface__msg__Numbers__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
my_turtle_msg_interface__msg__Numbers *
my_turtle_msg_interface__msg__Numbers__create(void);

/// Destroy msg/Numbers message.
/**
 * It calls
 * my_turtle_msg_interface__msg__Numbers__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
void
my_turtle_msg_interface__msg__Numbers__destroy(my_turtle_msg_interface__msg__Numbers * msg);

/// Check for msg/Numbers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
bool
my_turtle_msg_interface__msg__Numbers__are_equal(const my_turtle_msg_interface__msg__Numbers * lhs, const my_turtle_msg_interface__msg__Numbers * rhs);

/// Copy a msg/Numbers message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
bool
my_turtle_msg_interface__msg__Numbers__copy(
  const my_turtle_msg_interface__msg__Numbers * input,
  my_turtle_msg_interface__msg__Numbers * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
const rosidl_type_hash_t *
my_turtle_msg_interface__msg__Numbers__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
const rosidl_runtime_c__type_description__TypeDescription *
my_turtle_msg_interface__msg__Numbers__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
const rosidl_runtime_c__type_description__TypeSource *
my_turtle_msg_interface__msg__Numbers__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_turtle_msg_interface__msg__Numbers__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Numbers messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_turtle_msg_interface__msg__Numbers__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
bool
my_turtle_msg_interface__msg__Numbers__Sequence__init(my_turtle_msg_interface__msg__Numbers__Sequence * array, size_t size);

/// Finalize array of msg/Numbers messages.
/**
 * It calls
 * my_turtle_msg_interface__msg__Numbers__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
void
my_turtle_msg_interface__msg__Numbers__Sequence__fini(my_turtle_msg_interface__msg__Numbers__Sequence * array);

/// Create array of msg/Numbers messages.
/**
 * It allocates the memory for the array and calls
 * my_turtle_msg_interface__msg__Numbers__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
my_turtle_msg_interface__msg__Numbers__Sequence *
my_turtle_msg_interface__msg__Numbers__Sequence__create(size_t size);

/// Destroy array of msg/Numbers messages.
/**
 * It calls
 * my_turtle_msg_interface__msg__Numbers__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
void
my_turtle_msg_interface__msg__Numbers__Sequence__destroy(my_turtle_msg_interface__msg__Numbers__Sequence * array);

/// Check for msg/Numbers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
bool
my_turtle_msg_interface__msg__Numbers__Sequence__are_equal(const my_turtle_msg_interface__msg__Numbers__Sequence * lhs, const my_turtle_msg_interface__msg__Numbers__Sequence * rhs);

/// Copy an array of msg/Numbers messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
bool
my_turtle_msg_interface__msg__Numbers__Sequence__copy(
  const my_turtle_msg_interface__msg__Numbers__Sequence * input,
  my_turtle_msg_interface__msg__Numbers__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_TURTLE_MSG_INTERFACE__MSG__DETAIL__NUMBERS__FUNCTIONS_H_
