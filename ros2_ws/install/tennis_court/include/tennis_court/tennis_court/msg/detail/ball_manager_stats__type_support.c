// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tennis_court/msg/detail/ball_manager_stats__rosidl_typesupport_introspection_c.h"
#include "tennis_court/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tennis_court/msg/detail/ball_manager_stats__functions.h"
#include "tennis_court/msg/detail/ball_manager_stats__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tennis_court__msg__BallManagerStats__init(message_memory);
}

void tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_fini_function(void * message_memory)
{
  tennis_court__msg__BallManagerStats__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_member_array[3] = {
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tennis_court__msg__BallManagerStats, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_ball_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tennis_court__msg__BallManagerStats, current_ball_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_ball_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tennis_court__msg__BallManagerStats, total_ball_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_members = {
  "tennis_court__msg",  // message namespace
  "BallManagerStats",  // message name
  3,  // number of fields
  sizeof(tennis_court__msg__BallManagerStats),
  tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_member_array,  // message members
  tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_init_function,  // function to initialize message memory (memory has to be allocated)
  tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_type_support_handle = {
  0,
  &tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tennis_court
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tennis_court, msg, BallManagerStats)() {
  if (!tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_type_support_handle.typesupport_identifier) {
    tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tennis_court__msg__BallManagerStats__rosidl_typesupport_introspection_c__BallManagerStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
