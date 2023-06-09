// Generated by gencpp from file interbotix_xs_sdk/RegisterValuesRequest.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_XS_SDK_MESSAGE_REGISTERVALUESREQUEST_H
#define INTERBOTIX_XS_SDK_MESSAGE_REGISTERVALUESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_xs_sdk
{
template <class ContainerAllocator>
struct RegisterValuesRequest_
{
  typedef RegisterValuesRequest_<ContainerAllocator> Type;

  RegisterValuesRequest_()
    : cmd_type()
    , name()
    , reg()
    , value(0)  {
    }
  RegisterValuesRequest_(const ContainerAllocator& _alloc)
    : cmd_type(_alloc)
    , name(_alloc)
    , reg(_alloc)
    , value(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _cmd_type_type;
  _cmd_type_type cmd_type;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _reg_type;
  _reg_type reg;

   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RegisterValuesRequest_

typedef ::interbotix_xs_sdk::RegisterValuesRequest_<std::allocator<void> > RegisterValuesRequest;

typedef boost::shared_ptr< ::interbotix_xs_sdk::RegisterValuesRequest > RegisterValuesRequestPtr;
typedef boost::shared_ptr< ::interbotix_xs_sdk::RegisterValuesRequest const> RegisterValuesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator1> & lhs, const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd_type == rhs.cmd_type &&
    lhs.name == rhs.name &&
    lhs.reg == rhs.reg &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator1> & lhs, const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_xs_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff17efd6d442abdb0ecf037a885cc01c";
  }

  static const char* value(const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff17efd6d442abdbULL;
  static const uint64_t static_value2 = 0x0ecf037a885cc01cULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_xs_sdk/RegisterValuesRequest";
  }

  static const char* value(const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Set or get the register(s) value(s) from motor(s)\n"
"#\n"
"# To get familiar with the register values, go to...\n"
"# http://emanual.robotis.com/docs/en/software/dynamixel/dynamixel_workbench/\n"
"# ...click on a motor model, and scroll down to the 'Control Table of RAM Area' section.\n"
"\n"
"string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint\n"
"string name              # name of the group if commanding a joint group or joint if commanding a single joint\n"
"string reg               # register name (like Profile_Velocity, Profile_Acceleration, etc...)\n"
"int32 value              # desired register value (only set if 'setting' a register)\n"
;
  }

  static const char* value(const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd_type);
      stream.next(m.name);
      stream.next(m.reg);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RegisterValuesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_xs_sdk::RegisterValuesRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.cmd_type);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "reg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.reg);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_XS_SDK_MESSAGE_REGISTERVALUESREQUEST_H
