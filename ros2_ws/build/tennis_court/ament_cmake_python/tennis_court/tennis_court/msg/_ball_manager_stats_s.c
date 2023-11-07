// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tennis_court/msg/detail/ball_manager_stats__struct.h"
#include "tennis_court/msg/detail/ball_manager_stats__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tennis_court__msg__ball_manager_stats__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tennis_court.msg._ball_manager_stats.BallManagerStats", full_classname_dest, 53) == 0);
  }
  tennis_court__msg__BallManagerStats * ros_message = _ros_message;
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->score = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // current_ball_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_ball_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_ball_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // total_ball_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_ball_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_ball_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tennis_court__msg__ball_manager_stats__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BallManagerStats */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tennis_court.msg._ball_manager_stats");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BallManagerStats");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tennis_court__msg__BallManagerStats * ros_message = (tennis_court__msg__BallManagerStats *)raw_ros_message;
  {  // score
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_ball_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_ball_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_ball_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_ball_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->total_ball_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_ball_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
