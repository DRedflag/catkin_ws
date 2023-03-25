// Generated by gencpp from file robotnik_elevator_interface_msgs/GoToFloorResponse.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_GOTOFLOORRESPONSE_H
#define ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_GOTOFLOORRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_elevator_interface_msgs
{
template <class ContainerAllocator>
struct GoToFloorResponse_
{
  typedef GoToFloorResponse_<ContainerAllocator> Type;

  GoToFloorResponse_()
    : success(false)
    , message()  {
    }
  GoToFloorResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GoToFloorResponse_

typedef ::robotnik_elevator_interface_msgs::GoToFloorResponse_<std::allocator<void> > GoToFloorResponse;

typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::GoToFloorResponse > GoToFloorResponsePtr;
typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::GoToFloorResponse const> GoToFloorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator1> & lhs, const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator1> & lhs, const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_elevator_interface_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_elevator_interface_msgs/GoToFloorResponse";
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
"\n"
"\n"
;
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToFloorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_elevator_interface_msgs::GoToFloorResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_GOTOFLOORRESPONSE_H
