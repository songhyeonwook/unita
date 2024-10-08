// Generated by gencpp from file erp42_msgs/ModeCmd.msg
// DO NOT EDIT!


#ifndef ERP42_MSGS_MESSAGE_MODECMD_H
#define ERP42_MSGS_MESSAGE_MODECMD_H


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
struct ModeCmd_
{
  typedef ModeCmd_<ContainerAllocator> Type;

  ModeCmd_()
    : MorA(0)
    , EStop(0)
    , Gear(0)
    , alive(0)  {
    }
  ModeCmd_(const ContainerAllocator& _alloc)
    : MorA(0)
    , EStop(0)
    , Gear(0)
    , alive(0)  {
  (void)_alloc;
    }



   typedef uint8_t _MorA_type;
  _MorA_type MorA;

   typedef uint8_t _EStop_type;
  _EStop_type EStop;

   typedef uint8_t _Gear_type;
  _Gear_type Gear;

   typedef uint8_t _alive_type;
  _alive_type alive;





  typedef boost::shared_ptr< ::erp42_msgs::ModeCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::erp42_msgs::ModeCmd_<ContainerAllocator> const> ConstPtr;

}; // struct ModeCmd_

typedef ::erp42_msgs::ModeCmd_<std::allocator<void> > ModeCmd;

typedef boost::shared_ptr< ::erp42_msgs::ModeCmd > ModeCmdPtr;
typedef boost::shared_ptr< ::erp42_msgs::ModeCmd const> ModeCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::erp42_msgs::ModeCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::erp42_msgs::ModeCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::erp42_msgs::ModeCmd_<ContainerAllocator1> & lhs, const ::erp42_msgs::ModeCmd_<ContainerAllocator2> & rhs)
{
  return lhs.MorA == rhs.MorA &&
    lhs.EStop == rhs.EStop &&
    lhs.Gear == rhs.Gear &&
    lhs.alive == rhs.alive;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::erp42_msgs::ModeCmd_<ContainerAllocator1> & lhs, const ::erp42_msgs::ModeCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace erp42_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::erp42_msgs::ModeCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::erp42_msgs::ModeCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::erp42_msgs::ModeCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93db1f5d15225b4e964829a0cf6a3bdb";
  }

  static const char* value(const ::erp42_msgs::ModeCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93db1f5d15225b4eULL;
  static const uint64_t static_value2 = 0x964829a0cf6a3bdbULL;
};

template<class ContainerAllocator>
struct DataType< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "erp42_msgs/ModeCmd";
  }

  static const char* value(const ::erp42_msgs::ModeCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "########################################\n"
"# Messages\n"
"########################################\n"
"uint8 MorA\n"
"uint8 EStop\n"
"uint8 Gear\n"
"uint8 alive\n"
;
  }

  static const char* value(const ::erp42_msgs::ModeCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.MorA);
      stream.next(m.EStop);
      stream.next(m.Gear);
      stream.next(m.alive);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModeCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::erp42_msgs::ModeCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::erp42_msgs::ModeCmd_<ContainerAllocator>& v)
  {
    s << indent << "MorA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.MorA);
    s << indent << "EStop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EStop);
    s << indent << "Gear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Gear);
    s << indent << "alive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alive);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ERP42_MSGS_MESSAGE_MODECMD_H
