// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moteus_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include "moteus_msgs/msg/detail/controller_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moteus_msgs
const rosidl_type_hash_t *
moteus_msgs__msg__ControllerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x01, 0x13, 0x1e, 0x93, 0x8c, 0x25, 0x3f,
      0x6f, 0x47, 0x93, 0xe9, 0x9b, 0x99, 0x90, 0x6e,
      0xf7, 0x1b, 0xd5, 0x4e, 0xf4, 0x64, 0xd2, 0x2e,
      0x0d, 0x4f, 0x7c, 0x61, 0x84, 0xa6, 0xa1, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char moteus_msgs__msg__ControllerState__TYPE_NAME[] = "moteus_msgs/msg/ControllerState";

// Define type names, field names, and default values
static char moteus_msgs__msg__ControllerState__FIELD_NAME__mode[] = "mode";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__position[] = "position";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__velocity[] = "velocity";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__torque[] = "torque";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__motor_temperature[] = "motor_temperature";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__trajectory_complete[] = "trajectory_complete";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__home_state[] = "home_state";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__voltage[] = "voltage";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__temperature[] = "temperature";
static char moteus_msgs__msg__ControllerState__FIELD_NAME__fault_code[] = "fault_code";

static rosidl_runtime_c__type_description__Field moteus_msgs__msg__ControllerState__FIELDS[] = {
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__torque, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__motor_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__trajectory_complete, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__home_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__ControllerState__FIELD_NAME__fault_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moteus_msgs__msg__ControllerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moteus_msgs__msg__ControllerState__TYPE_NAME, 31, 31},
      {moteus_msgs__msg__ControllerState__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 mode\n"
  "float32 position\n"
  "float32 velocity\n"
  "float32 torque\n"
  "float32 motor_temperature\n"
  "uint8 trajectory_complete\n"
  "uint8 home_state\n"
  "float32 voltage\n"
  "float32 temperature\n"
  "uint8 fault_code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moteus_msgs__msg__ControllerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moteus_msgs__msg__ControllerState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 182, 182},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moteus_msgs__msg__ControllerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moteus_msgs__msg__ControllerState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
