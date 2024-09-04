# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from erp42_msgs/CANFeedBack.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CANFeedBack(genpy.Message):
  _md5sum = "8d74d0371fb1f42def9619b2296ec65d"
  _type = "erp42_msgs/CANFeedBack"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """########################################
# Messages
########################################
uint8 MorA
uint8 EStop
uint8 Gear
float64 speed
float64 steer
uint8 brake
uint8 alive

int32 encoder
uint8 brake_cmd_raw
uint8 brake_raw
uint8 brake_echo
uint8 brake_init_max

"""
  __slots__ = ['MorA','EStop','Gear','speed','steer','brake','alive','encoder','brake_cmd_raw','brake_raw','brake_echo','brake_init_max']
  _slot_types = ['uint8','uint8','uint8','float64','float64','uint8','uint8','int32','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       MorA,EStop,Gear,speed,steer,brake,alive,encoder,brake_cmd_raw,brake_raw,brake_echo,brake_init_max

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CANFeedBack, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.MorA is None:
        self.MorA = 0
      if self.EStop is None:
        self.EStop = 0
      if self.Gear is None:
        self.Gear = 0
      if self.speed is None:
        self.speed = 0.
      if self.steer is None:
        self.steer = 0.
      if self.brake is None:
        self.brake = 0
      if self.alive is None:
        self.alive = 0
      if self.encoder is None:
        self.encoder = 0
      if self.brake_cmd_raw is None:
        self.brake_cmd_raw = 0
      if self.brake_raw is None:
        self.brake_raw = 0
      if self.brake_echo is None:
        self.brake_echo = 0
      if self.brake_init_max is None:
        self.brake_init_max = 0
    else:
      self.MorA = 0
      self.EStop = 0
      self.Gear = 0
      self.speed = 0.
      self.steer = 0.
      self.brake = 0
      self.alive = 0
      self.encoder = 0
      self.brake_cmd_raw = 0
      self.brake_raw = 0
      self.brake_echo = 0
      self.brake_init_max = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3B2d2Bi4B().pack(_x.MorA, _x.EStop, _x.Gear, _x.speed, _x.steer, _x.brake, _x.alive, _x.encoder, _x.brake_cmd_raw, _x.brake_raw, _x.brake_echo, _x.brake_init_max))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 29
      (_x.MorA, _x.EStop, _x.Gear, _x.speed, _x.steer, _x.brake, _x.alive, _x.encoder, _x.brake_cmd_raw, _x.brake_raw, _x.brake_echo, _x.brake_init_max,) = _get_struct_3B2d2Bi4B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3B2d2Bi4B().pack(_x.MorA, _x.EStop, _x.Gear, _x.speed, _x.steer, _x.brake, _x.alive, _x.encoder, _x.brake_cmd_raw, _x.brake_raw, _x.brake_echo, _x.brake_init_max))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 29
      (_x.MorA, _x.EStop, _x.Gear, _x.speed, _x.steer, _x.brake, _x.alive, _x.encoder, _x.brake_cmd_raw, _x.brake_raw, _x.brake_echo, _x.brake_init_max,) = _get_struct_3B2d2Bi4B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B2d2Bi4B = None
def _get_struct_3B2d2Bi4B():
    global _struct_3B2d2Bi4B
    if _struct_3B2d2Bi4B is None:
        _struct_3B2d2Bi4B = struct.Struct("<3B2d2Bi4B")
    return _struct_3B2d2Bi4B
