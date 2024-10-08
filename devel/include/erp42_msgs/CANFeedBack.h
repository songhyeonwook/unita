// Generated by gencpp from file erp42_msgs/CANFeedBack.msg
// DO NOT EDIT!


#ifndef ERP42_MSGS_MESSAGE_CANFEEDBACK_H
#define ERP42_MSGS_MESSAGE_CANFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace erp42_msgs
{
template <class ContainerAllocator>
struct CANFeedBack_
{
  typedef CANFeedBack_<ContainerAllocator> Type;

  CANFeedBack_()
    : MorA(0)
    , EStop(0)
    , Gear(0)
    , speed(0.0)
    , steer(0.0)
    , brake(0)
    , alive(0)
    , encoder(0)
    , brake_cmd_raw(0)
    , brake_raw(0)
    , brake_echo(0)
    , brake_init_max(0)  {
    }
  CANFeedBack_(const ContainerAllocator& _alloc)
    : MorA(0)
    , EStop(0)
    , Gear(0)
    , speed(0.0)
    , steer(0.0)
    , brake(0)
    , alive(0)
    , encoder(0)
    , brake_cmd_raw(0)
    , brake_raw(0)
    , brake_echo(0)
    , brake_init_max(0)  {
  (void)_alloc;
    }



   typedef uint8_t _MorA_type;
  _MorA_type MorA;

   typedef uint8_t _EStop_type;
  _EStop_type EStop;

   typedef uint8_t _Gear_type;
  _Gear_type Gear;

   typedef double _speed_type;
  _speed_type speed;

   typedef double _steer_type;
  _steer_type steer;

   typedef uint8_t _brake_type;
  _brake_type brake;

   typedef uint8_t _alive_type;
  _alive_type alive;

   typedef int32_t _encoder_type;
  _encoder_type encoder;

   typedef uint8_t _brake_cmd_raw_type;
  _brake_cmd_raw_type brake_cmd_raw;

   typedef uint8_t _brake_raw_type;
  _brake_raw_type brake_raw;

   typedef uint8_t _brake_echo_type;
  _brake_echo_type brake_echo;

   typedef uint8_t _brake_init_max_type;
  _brake_init_max_type brake_init_max;





  typedef boost::shared_ptr< ::erp42_msgs::CANFeedBack_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::erp42_msgs::CANFeedBack_<ContainerAllocator> const> ConstPtr;

}; // struct CANFeedBack_

typedef ::erp42_msgs::CANFeedBack_<std::allocator<void> > CANFeedBack;

typedef boost::shared_ptr< ::erp42_msgs::CANFeedBack > CANFeedBackPtr;
typedef boost::shared_ptr< ::erp42_msgs::CANFeedBack const> CANFeedBackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::erp42_msgs::CANFeedBack_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::erp42_msgs::CANFeedBack_<ContainerAllocator1> & lhs, const ::erp42_msgs::CANFeedBack_<ContainerAllocator2> & rhs)
{
  return lhs.MorA == rhs.MorA &&
    lhs.EStop == rhs.EStop &&
    lhs.Gear == rhs.Gear &&
    lhs.speed == rhs.speed &&
    lhs.steer == rhs.steer &&
    lhs.brake == rhs.brake &&
    lhs.alive == rhs.alive &&
    lhs.encoder == rhs.encoder &&
    lhs.brake_cmd_raw == rhs.brake_cmd_raw &&
    lhs.brake_raw == rhs.brake_raw &&
    lhs.brake_echo == rhs.brake_echo &&
    lhs.brake_init_max == rhs.brake_init_max;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::erp42_msgs::CANFeedBack_<ContainerAllocator1> & lhs, const ::erp42_msgs::CANFeedBack_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace erp42_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::erp42_msgs::CANFeedBack_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::erp42_msgs::CANFeedBack_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::erp42_msgs::CANFeedBack_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d74d0371fb1f42def9619b2296ec65d";
  }

  static const char* value(const ::erp42_msgs::CANFeedBack_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d74d0371fb1f42dULL;
  static const uint64_t static_value2 = 0xef9619b2296ec65dULL;
};

template<class ContainerAllocator>
struct DataType< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "erp42_msgs/CANFeedBack";
  }

  static const char* value(const ::erp42_msgs::CANFeedBack_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "########################################\n"
"# Messages\n"
"########################################\n"
"uint8 MorA\n"
"uint8 EStop\n"
"uint8 Gear\n"
"float64 speed\n"
"float64 steer\n"
"uint8 brake\n"
"uint8 alive\n"
"\n"
"int32 encoder\n"
"uint8 brake_cmd_raw\n"
"uint8 brake_raw\n"
"uint8 brake_echo\n"
"uint8 brake_init_max\n"
"\n"
;
  }

  static const char* value(const ::erp42_msgs::CANFeedBack_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.MorA);
      stream.next(m.EStop);
      stream.next(m.Gear);
      stream.next(m.speed);
      stream.next(m.steer);
      stream.next(m.brake);
      stream.next(m.alive);
      stream.next(m.encoder);
      stream.next(m.brake_cmd_raw);
      stream.next(m.brake_raw);
      stream.next(m.brake_echo);
      stream.next(m.brake_init_max);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CANFeedBack_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::erp42_msgs::CANFeedBack_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::erp42_msgs::CANFeedBack_<ContainerAllocator>& v)
  {
    s << indent << "MorA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.MorA);
    s << indent << "EStop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EStop);
    s << indent << "Gear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Gear);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "steer: ";
    Printer<double>::stream(s, indent + "  ", v.steer);
    s << indent << "brake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake);
    s << indent << "alive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alive);
    s << indent << "encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.encoder);
    s << indent << "brake_cmd_raw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_cmd_raw);
    s << indent << "brake_raw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_raw);
    s << indent << "brake_echo: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_echo);
    s << indent << "brake_init_max: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_init_max);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ERP42_MSGS_MESSAGE_CANFEEDBACK_H
