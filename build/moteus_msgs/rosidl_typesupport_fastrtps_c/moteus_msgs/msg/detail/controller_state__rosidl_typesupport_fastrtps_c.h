// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from moteus_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice
#ifndef MOTEUS_MSGS__MSG__DETAIL__CONTROLLER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MOTEUS_MSGS__MSG__DETAIL__CONTROLLER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "moteus_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moteus_msgs/msg/detail/controller_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
bool cdr_serialize_moteus_msgs__msg__ControllerState(
  const moteus_msgs__msg__ControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
bool cdr_deserialize_moteus_msgs__msg__ControllerState(
  eprosima::fastcdr::Cdr &,
  moteus_msgs__msg__ControllerState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
size_t get_serialized_size_moteus_msgs__msg__ControllerState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
size_t max_serialized_size_moteus_msgs__msg__ControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
bool cdr_serialize_key_moteus_msgs__msg__ControllerState(
  const moteus_msgs__msg__ControllerState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
size_t get_serialized_size_key_moteus_msgs__msg__ControllerState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
size_t max_serialized_size_key_moteus_msgs__msg__ControllerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moteus_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moteus_msgs, msg, ControllerState)();

#ifdef __cplusplus
}
#endif

#endif  // MOTEUS_MSGS__MSG__DETAIL__CONTROLLER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
