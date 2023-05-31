# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiRangerScan_Goal(type):
    """Metaclass of message 'MultiRangerScan_Goal'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_Goal(metaclass=Metaclass_MultiRangerScan_Goal):
    """Message class 'MultiRangerScan_Goal'."""

    __slots__ = [
        '_scan_angle',
    ]

    _fields_and_field_types = {
        'scan_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scan_angle = kwargs.get('scan_angle', float())

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
        if self.scan_angle != other.scan_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def scan_angle(self):
        """Message field 'scan_angle'."""
        return self._scan_angle

    @scan_angle.setter
    def scan_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scan_angle' field must be of type 'float'"
        self._scan_angle = value


# Import statements for member types

# Member 'laser_scan'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_Result(type):
    """Metaclass of message 'MultiRangerScan_Result'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_Result(metaclass=Metaclass_MultiRangerScan_Result):
    """Message class 'MultiRangerScan_Result'."""

    __slots__ = [
        '_laser_scan',
    ]

    _fields_and_field_types = {
        'laser_scan': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.laser_scan = array.array('f', kwargs.get('laser_scan', []))

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
        if self.laser_scan != other.laser_scan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def laser_scan(self):
        """Message field 'laser_scan'."""
        return self._laser_scan

    @laser_scan.setter
    def laser_scan(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'laser_scan' array.array() must have the type code of 'f'"
            self._laser_scan = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'laser_scan' field must be a set or sequence and each value of type 'float'"
        self._laser_scan = array.array('f', value)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_Feedback(type):
    """Metaclass of message 'MultiRangerScan_Feedback'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_Feedback(metaclass=Metaclass_MultiRangerScan_Feedback):
    """Message class 'MultiRangerScan_Feedback'."""

    __slots__ = [
        '_current_angle',
    ]

    _fields_and_field_types = {
        'current_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_angle = kwargs.get('current_angle', float())

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
        if self.current_angle != other.current_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def current_angle(self):
        """Message field 'current_angle'."""
        return self._current_angle

    @current_angle.setter
    def current_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle' field must be of type 'float'"
        self._current_angle = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_SendGoal_Request(type):
    """Metaclass of message 'MultiRangerScan_SendGoal_Request'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__send_goal__request

            from crazyflie_ros2_interfaces.action import MultiRangerScan
            if MultiRangerScan.Goal.__class__._TYPE_SUPPORT is None:
                MultiRangerScan.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_SendGoal_Request(metaclass=Metaclass_MultiRangerScan_SendGoal_Request):
    """Message class 'MultiRangerScan_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'crazyflie_ros2_interfaces/MultiRangerScan_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crazyflie_ros2_interfaces', 'action'], 'MultiRangerScan_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Goal
        self.goal = kwargs.get('goal', MultiRangerScan_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Goal
            assert \
                isinstance(value, MultiRangerScan_Goal), \
                "The 'goal' field must be a sub message of type 'MultiRangerScan_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_SendGoal_Response(type):
    """Metaclass of message 'MultiRangerScan_SendGoal_Response'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_SendGoal_Response(metaclass=Metaclass_MultiRangerScan_SendGoal_Response):
    """Message class 'MultiRangerScan_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_MultiRangerScan_SendGoal(type):
    """Metaclass of service 'MultiRangerScan_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__multi_ranger_scan__send_goal

            from crazyflie_ros2_interfaces.action import _multi_ranger_scan
            if _multi_ranger_scan.Metaclass_MultiRangerScan_SendGoal_Request._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_SendGoal_Request.__import_type_support__()
            if _multi_ranger_scan.Metaclass_MultiRangerScan_SendGoal_Response._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_SendGoal_Response.__import_type_support__()


class MultiRangerScan_SendGoal(metaclass=Metaclass_MultiRangerScan_SendGoal):
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_SendGoal_Request as Request
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_GetResult_Request(type):
    """Metaclass of message 'MultiRangerScan_GetResult_Request'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_GetResult_Request(metaclass=Metaclass_MultiRangerScan_GetResult_Request):
    """Message class 'MultiRangerScan_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_GetResult_Response(type):
    """Metaclass of message 'MultiRangerScan_GetResult_Response'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__get_result__response

            from crazyflie_ros2_interfaces.action import MultiRangerScan
            if MultiRangerScan.Result.__class__._TYPE_SUPPORT is None:
                MultiRangerScan.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_GetResult_Response(metaclass=Metaclass_MultiRangerScan_GetResult_Response):
    """Message class 'MultiRangerScan_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'crazyflie_ros2_interfaces/MultiRangerScan_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crazyflie_ros2_interfaces', 'action'], 'MultiRangerScan_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Result
        self.result = kwargs.get('result', MultiRangerScan_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Result
            assert \
                isinstance(value, MultiRangerScan_Result), \
                "The 'result' field must be a sub message of type 'MultiRangerScan_Result'"
        self._result = value


class Metaclass_MultiRangerScan_GetResult(type):
    """Metaclass of service 'MultiRangerScan_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__multi_ranger_scan__get_result

            from crazyflie_ros2_interfaces.action import _multi_ranger_scan
            if _multi_ranger_scan.Metaclass_MultiRangerScan_GetResult_Request._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_GetResult_Request.__import_type_support__()
            if _multi_ranger_scan.Metaclass_MultiRangerScan_GetResult_Response._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_GetResult_Response.__import_type_support__()


class MultiRangerScan_GetResult(metaclass=Metaclass_MultiRangerScan_GetResult):
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_GetResult_Request as Request
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MultiRangerScan_FeedbackMessage(type):
    """Metaclass of message 'MultiRangerScan_FeedbackMessage'."""

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
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__multi_ranger_scan__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__multi_ranger_scan__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__multi_ranger_scan__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__multi_ranger_scan__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__multi_ranger_scan__feedback_message

            from crazyflie_ros2_interfaces.action import MultiRangerScan
            if MultiRangerScan.Feedback.__class__._TYPE_SUPPORT is None:
                MultiRangerScan.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiRangerScan_FeedbackMessage(metaclass=Metaclass_MultiRangerScan_FeedbackMessage):
    """Message class 'MultiRangerScan_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'crazyflie_ros2_interfaces/MultiRangerScan_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crazyflie_ros2_interfaces', 'action'], 'MultiRangerScan_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Feedback
        self.feedback = kwargs.get('feedback', MultiRangerScan_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Feedback
            assert \
                isinstance(value, MultiRangerScan_Feedback), \
                "The 'feedback' field must be a sub message of type 'MultiRangerScan_Feedback'"
        self._feedback = value


class Metaclass_MultiRangerScan(type):
    """Metaclass of action 'MultiRangerScan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crazyflie_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crazyflie_ros2_interfaces.action.MultiRangerScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__multi_ranger_scan

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from crazyflie_ros2_interfaces.action import _multi_ranger_scan
            if _multi_ranger_scan.Metaclass_MultiRangerScan_SendGoal._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_SendGoal.__import_type_support__()
            if _multi_ranger_scan.Metaclass_MultiRangerScan_GetResult._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_GetResult.__import_type_support__()
            if _multi_ranger_scan.Metaclass_MultiRangerScan_FeedbackMessage._TYPE_SUPPORT is None:
                _multi_ranger_scan.Metaclass_MultiRangerScan_FeedbackMessage.__import_type_support__()


class MultiRangerScan(metaclass=Metaclass_MultiRangerScan):

    # The goal message defined in the action definition.
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Goal as Goal
    # The result message defined in the action definition.
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Result as Result
    # The feedback message defined in the action definition.
    from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from crazyflie_ros2_interfaces.action._multi_ranger_scan import MultiRangerScan_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
