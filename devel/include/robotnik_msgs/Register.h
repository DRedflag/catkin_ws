// Generated by gencpp from file robotnik_msgs/Register.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_REGISTER_H
#define ROBOTNIK_MSGS_MESSAGE_REGISTER_H


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
struct Register_
{
  typedef Register_<ContainerAllocator> Type;

  Register_()
    : id(0)
    , value(0)  {
    }
  Register_(const ContainerAllocator& _alloc)
    : id(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::robotnik_msgs::Register_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::Register_<ContainerAllocator> const> ConstPtr;

}; // struct Register_

typedef ::robotnik_msgs::Register_<std::allocator<void> > Register;

typedef boost::shared_ptr< ::robotnik_msgs::Register > RegisterPtr;
typedef boost::shared_ptr< ::robotnik_msgs::Register const> RegisterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::Register_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::Register_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::Register_<ContainerAllocator1> & lhs, const ::robotnik_msgs::Register_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::Register_<ContainerAllocator1> & lhs, const ::robotnik_msgs::Register_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Register_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Register_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Register_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Register_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Register_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Register_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::Register_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b971379644cd29fdf0000430f7d4b8e8";
  }

  static const char* value(const ::robotnik_msgs::Register_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb971379644cd29fdULL;
  static const uint64_t static_value2 = 0xf0000430f7d4b8e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::Register_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/Register";
  }

  static const char* value(const ::robotnik_msgs::Register_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::Register_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"int32 value\n"
;
  }

  static const char* value(const ::robotnik_msgs::Register_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::Register_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Register_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::Register_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::Register_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_REGISTER_H