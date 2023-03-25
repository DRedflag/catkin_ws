// Generated by gencpp from file xarm_msgs/GetErrResponse.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_GETERRRESPONSE_H
#define XARM_MSGS_MESSAGE_GETERRRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_msgs
{
template <class ContainerAllocator>
struct GetErrResponse_
{
  typedef GetErrResponse_<ContainerAllocator> Type;

  GetErrResponse_()
    : err(0)
    , message()  {
    }
  GetErrResponse_(const ContainerAllocator& _alloc)
    : err(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _err_type;
  _err_type err;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::xarm_msgs::GetErrResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::GetErrResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetErrResponse_

typedef ::xarm_msgs::GetErrResponse_<std::allocator<void> > GetErrResponse;

typedef boost::shared_ptr< ::xarm_msgs::GetErrResponse > GetErrResponsePtr;
typedef boost::shared_ptr< ::xarm_msgs::GetErrResponse const> GetErrResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::GetErrResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xarm_msgs::GetErrResponse_<ContainerAllocator1> & lhs, const ::xarm_msgs::GetErrResponse_<ContainerAllocator2> & rhs)
{
  return lhs.err == rhs.err &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xarm_msgs::GetErrResponse_<ContainerAllocator1> & lhs, const ::xarm_msgs::GetErrResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::GetErrResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::GetErrResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::GetErrResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e76afb4d672a4bc2845f5f5cad909c5e";
  }

  static const char* value(const ::xarm_msgs::GetErrResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe76afb4d672a4bc2ULL;
  static const uint64_t static_value2 = 0x845f5f5cad909c5eULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/GetErrResponse";
  }

  static const char* value(const ::xarm_msgs::GetErrResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int16 err\n"
"\n"
"string message\n"
;
  }

  static const char* value(const ::xarm_msgs::GetErrResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.err);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetErrResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::GetErrResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::GetErrResponse_<ContainerAllocator>& v)
  {
    s << indent << "err: ";
    Printer<int16_t>::stream(s, indent + "  ", v.err);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_GETERRRESPONSE_H
