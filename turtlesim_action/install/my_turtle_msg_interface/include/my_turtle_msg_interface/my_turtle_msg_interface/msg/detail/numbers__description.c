// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_turtle_msg_interface:msg/Numbers.idl
// generated code does not contain a copyright notice

#include "my_turtle_msg_interface/msg/detail/numbers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_turtle_msg_interface
const rosidl_type_hash_t *
my_turtle_msg_interface__msg__Numbers__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x7d, 0x2b, 0xc8, 0x8d, 0x85, 0xc3, 0xc0,
      0xbb, 0x6c, 0x16, 0xe1, 0x1f, 0xd0, 0xb8, 0x36,
      0x79, 0xdf, 0xbd, 0xfa, 0x5d, 0xeb, 0xac, 0x0f,
      0x57, 0xb8, 0xdb, 0x5d, 0xf7, 0x58, 0x40, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_turtle_msg_interface__msg__Numbers__TYPE_NAME[] = "my_turtle_msg_interface/msg/Numbers";

// Define type names, field names, and default values
static char my_turtle_msg_interface__msg__Numbers__FIELD_NAME__a[] = "a";
static char my_turtle_msg_interface__msg__Numbers__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field my_turtle_msg_interface__msg__Numbers__FIELDS[] = {
  {
    {my_turtle_msg_interface__msg__Numbers__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_turtle_msg_interface__msg__Numbers__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_turtle_msg_interface__msg__Numbers__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_turtle_msg_interface__msg__Numbers__TYPE_NAME, 35, 35},
      {my_turtle_msg_interface__msg__Numbers__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 a\n"
  "int16 b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_turtle_msg_interface__msg__Numbers__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_turtle_msg_interface__msg__Numbers__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_turtle_msg_interface__msg__Numbers__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_turtle_msg_interface__msg__Numbers__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
