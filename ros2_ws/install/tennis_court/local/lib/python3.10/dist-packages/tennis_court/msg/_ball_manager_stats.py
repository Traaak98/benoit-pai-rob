# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tennis_court:msg/BallManagerStats.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BallManagerStats(type):
    """Metaclass of message 'BallManagerStats'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tennis_court')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tennis_court.msg.BallManagerStats')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ball_manager_stats
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ball_manager_stats
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ball_manager_stats
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ball_manager_stats
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ball_manager_stats

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BallManagerStats(metaclass=Metaclass_BallManagerStats):
    """Message class 'BallManagerStats'."""

    __slots__ = [
        '_score',
        '_current_ball_count',
        '_total_ball_count',
    ]

    _fields_and_field_types = {
        'score': 'int64',
        'current_ball_count': 'int32',
        'total_ball_count': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.score = kwargs.get('score', int())
        self.current_ball_count = kwargs.get('current_ball_count', int())
        self.total_ball_count = kwargs.get('total_ball_count', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.score != other.score:
            return False
        if self.current_ball_count != other.current_ball_count:
            return False
        if self.total_ball_count != other.total_ball_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'score' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'score' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._score = value

    @builtins.property
    def current_ball_count(self):
        """Message field 'current_ball_count'."""
        return self._current_ball_count

    @current_ball_count.setter
    def current_ball_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_ball_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_ball_count' field must be an integer in [-2147483648, 2147483647]"
        self._current_ball_count = value

    @builtins.property
    def total_ball_count(self):
        """Message field 'total_ball_count'."""
        return self._total_ball_count

    @total_ball_count.setter
    def total_ball_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_ball_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_ball_count' field must be an integer in [-2147483648, 2147483647]"
        self._total_ball_count = value
