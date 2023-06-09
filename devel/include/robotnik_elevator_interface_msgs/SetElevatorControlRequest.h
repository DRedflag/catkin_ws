// Generated by gencpp from file robotnik_elevator_interface_msgs/SetElevatorControlRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_SETELEVATORCONTROLREQUEST_H
#define ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_SETELEVATORCONTROLREQUEST_H


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
struct SetElevatorControlRequest_
{
  typedef SetElevatorControlRequest_<ContainerAllocator> Type;

  SetElevatorControlRequest_()
    : under_control(false)
    , master_id()
    , control_token()  {
    }
  SetElevatorControlRequest_(const ContainerAllocator& _alloc)
    : under_control(false)
    , master_id(_alloc)
    , control_token(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _under_control_type;
  _under_control_type under_control;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _master_id_type;
  _master_id_type master_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _control_token_type;
  _control_token_type control_token;





  typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetElevatorControlRequest_

typedef ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<std::allocator<void> > SetElevatorControlRequest;

typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest > SetElevatorControlRequestPtr;
typedef boost::shared_ptr< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest const> SetElevatorControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator1> & lhs, const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator2> & rhs)
{
  return lhs.under_control == rhs.under_control &&
    lhs.master_id == rhs.master_id &&
    lhs.control_token == rhs.control_token;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator1> & lhs, const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_elevator_interface_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c153229591ef4c5958efac4406d734ef";
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc153229591ef4c59ULL;
  static const uint64_t static_value2 = 0x58efac4406d734efULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_elevator_interface_msgs/SetElevatorControlRequest";
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# flat to set or not the control\n"
"bool under_control\n"
"# id to identify who is controlling the elevator\n"
"string master_id\n"
"# unique control token to avoid controlling the elevator from external agents\n"
"string control_token\n"
;
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.under_control);
      stream.next(m.master_id);
      stream.next(m.control_token);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetElevatorControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "under_control: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.under_control);
    s << indent << "master_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.master_id);
    s << indent << "control_token: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.control_token);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_SETELEVATORCONTROLREQUEST_H
