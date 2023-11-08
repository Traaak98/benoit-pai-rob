// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msg/msg/detail/img_detection__rosidl_typesupport_introspection_c.h"
#include "custom_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msg/msg/detail/img_detection__functions.h"
#include "custom_msg/msg/detail/img_detection__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordx`
// Member `coordy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msg__msg__ImgDetection__init(message_memory);
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_fini_function(void * message_memory)
{
  custom_msg__msg__ImgDetection__fini(message_memory);
}

size_t custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__size_function__ImgDetection__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__fetch_function__ImgDetection__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__assign_function__ImgDetection__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__resize_function__ImgDetection__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__size_function__ImgDetection__coordx(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__coordx(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__coordx(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__fetch_function__ImgDetection__coordx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__coordx(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__assign_function__ImgDetection__coordx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__coordx(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__resize_function__ImgDetection__coordx(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__size_function__ImgDetection__coordy(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__coordy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__coordy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__fetch_function__ImgDetection__coordy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__coordy(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__assign_function__ImgDetection__coordy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__coordy(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__resize_function__ImgDetection__coordy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_member_array[4] = {
  {
    "detect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg__msg__ImgDetection, detect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg__msg__ImgDetection, names),  // bytes offset in struct
    NULL,  // default value
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__size_function__ImgDetection__names,  // size() function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__names,  // get_const(index) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__names,  // get(index) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__fetch_function__ImgDetection__names,  // fetch(index, &value) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__assign_function__ImgDetection__names,  // assign(index, value) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__resize_function__ImgDetection__names  // resize(index) function pointer
  },
  {
    "coordx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg__msg__ImgDetection, coordx),  // bytes offset in struct
    NULL,  // default value
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__size_function__ImgDetection__coordx,  // size() function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__coordx,  // get_const(index) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__coordx,  // get(index) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__fetch_function__ImgDetection__coordx,  // fetch(index, &value) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__assign_function__ImgDetection__coordx,  // assign(index, value) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__resize_function__ImgDetection__coordx  // resize(index) function pointer
  },
  {
    "coordy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg__msg__ImgDetection, coordy),  // bytes offset in struct
    NULL,  // default value
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__size_function__ImgDetection__coordy,  // size() function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_const_function__ImgDetection__coordy,  // get_const(index) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__get_function__ImgDetection__coordy,  // get(index) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__fetch_function__ImgDetection__coordy,  // fetch(index, &value) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__assign_function__ImgDetection__coordy,  // assign(index, value) function pointer
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__resize_function__ImgDetection__coordy  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_members = {
  "custom_msg__msg",  // message namespace
  "ImgDetection",  // message name
  4,  // number of fields
  sizeof(custom_msg__msg__ImgDetection),
  custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_member_array,  // message members
  custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_type_support_handle = {
  0,
  &custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg, msg, ImgDetection)() {
  if (!custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_type_support_handle.typesupport_identifier) {
    custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msg__msg__ImgDetection__rosidl_typesupport_introspection_c__ImgDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
