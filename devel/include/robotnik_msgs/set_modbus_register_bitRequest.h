// Generated by gencpp from file robotnik_msgs/set_modbus_register_bitRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SET_MODBUS_REGISTER_BITREQUEST_H
#define ROBOTNIK_MSGS_MESSAGE_SET_MODBUS_REGISTER_BITREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct set_modbus_register_bitRequest_
{
  typedef set_modbus_register_bitRequest_<ContainerAllocator> Type;

  set_modbus_register_bitRequest_()
    : address(0)
    , bit(0)
    , value(false)  {
    }
  set_modbus_register_bitRequest_(const ContainerAllocator& _alloc)
    : address(0)
    , bit(0)
    , value(false)  {
  (void)_alloc;
    }



   typedef int16_t _address_type;
  _address_type address;

   typedef int16_t _bit_type;
  _bit_type bit;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_modbus_register_bitRequest_

typedef ::robotnik_msgs::set_modbus_register_bitRequest_<std::allocator<void> > set_modbus_register_bitRequest;

typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_register_bitRequest > set_modbus_register_bitRequestPtr;
typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_register_bitRequest const> set_modbus_register_bitRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator1> & lhs, const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator2> & rhs)
{
  return lhs.address == rhs.address &&
    lhs.bit == rhs.bit &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator1> & lhs, const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "802ee9818bd86ff018a6b6838f90a10a";
  }

  static const char* value(const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x802ee9818bd86ff0ULL;
  static const uint64_t static_value2 = 0x18a6b6838f90a10aULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/set_modbus_register_bitRequest";
  }

  static const char* value(const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 address\n"
"int16 bit\n"
"bool value\n"
;
  }

  static const char* value(const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
      stream.next(m.bit);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_modbus_register_bitRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::set_modbus_register_bitRequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<int16_t>::stream(s, indent + "  ", v.address);
    s << indent << "bit: ";
    Printer<int16_t>::stream(s, indent + "  ", v.bit);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SET_MODBUS_REGISTER_BITREQUEST_H
