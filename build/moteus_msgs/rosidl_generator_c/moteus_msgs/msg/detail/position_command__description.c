// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moteus_msgs:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#include "moteus_msgs/msg/detail/position_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moteus_msgs
const rosidl_type_hash_t *
moteus_msgs__msg__PositionCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x56, 0x24, 0x89, 0x6d, 0x5d, 0x7b, 0xa5,
      0xca, 0x36, 0xe9, 0xd8, 0xd2, 0x1d, 0x46, 0xd6,
      0xec, 0x8b, 0x4d, 0x43, 0x6f, 0xd4, 0x0f, 0x68,
      0x2b, 0xbb, 0xeb, 0xb5, 0xa8, 0xe4, 0x90, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char moteus_msgs__msg__PositionCommand__TYPE_NAME[] = "moteus_msgs/msg/PositionCommand";

// Define type names, field names, and default values
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__position[] = "position";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__velocity[] = "velocity";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__feedforward_torque[] = "feedforward_torque";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__kp_scale[] = "kp_scale";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__kd_scale[] = "kd_scale";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__maximum_torque[] = "maximum_torque";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__stop_position[] = "stop_position";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__watchdog_timeout[] = "watchdog_timeout";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__velocity_limit[] = "velocity_limit";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__accel_limit[] = "accel_limit";
static char moteus_msgs__msg__PositionCommand__FIELD_NAME__fixed_voltage_override[] = "fixed_voltage_override";

static rosidl_runtime_c__type_description__Field moteus_msgs__msg__PositionCommand__FIELDS[] = {
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__feedforward_torque, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__kp_scale, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__kd_scale, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__maximum_torque, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__stop_position, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__watchdog_timeout, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__velocity_limit, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__accel_limit, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moteus_msgs__msg__PositionCommand__FIELD_NAME__fixed_voltage_override, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moteus_msgs__msg__PositionCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moteus_msgs__msg__PositionCommand__TYPE_NAME, 31, 31},
      {moteus_msgs__msg__PositionCommand__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Empty lists will be treated as unset.  For non-empty fields,\n"
  "# only the first element will be used.\n"
  "\n"
  "float32[] position\n"
  "float32[] velocity\n"
  "float32[] feedforward_torque\n"
  "float32[] kp_scale\n"
  "float32[] kd_scale\n"
  "float32[] maximum_torque\n"
  "float32[] stop_position\n"
  "float32[] watchdog_timeout\n"
  "float32[] velocity_limit\n"
  "float32[] accel_limit\n"
  "float32[] fixed_voltage_override";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moteus_msgs__msg__PositionCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moteus_msgs__msg__PositionCommand__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 364, 364},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moteus_msgs__msg__PositionCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moteus_msgs__msg__PositionCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
