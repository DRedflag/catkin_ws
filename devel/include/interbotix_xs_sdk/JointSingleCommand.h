// Generated by gencpp from file interbotix_xs_sdk/JointSingleCommand.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_XS_SDK_MESSAGE_JOINTSINGLECOMMAND_H
#define INTERBOTIX_XS_SDK_MESSAGE_JOINTSINGLECOMMAND_H


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
struct JointSingleCommand_
{
  typedef JointSingleCommand_<ContainerAllocator> Type;

  JointSingleCommand_()
    : name()
    , cmd(0.0)  {
    }
  JointSingleCommand_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , cmd(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef float _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> const> ConstPtr;

}; // struct JointSingleCommand_

typedef ::interbotix_xs_sdk::JointSingleCommand_<std::allocator<void> > JointSingleCommand;

typedef boost::shared_ptr< ::interbotix_xs_sdk::JointSingleCommand > JointSingleCommandPtr;
typedef boost::shared_ptr< ::interbotix_xs_sdk::JointSingleCommand const> JointSingleCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator1> & lhs, const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.cmd == rhs.cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator1> & lhs, const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_xs_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79b74399c9cdcc4c0be32d540424ed2e";
  }

  static const char* value(const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79b74399c9cdcc4cULL;
  static const uint64_t static_value2 = 0x0be32d540424ed2eULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_xs_sdk/JointSingleCommand";
  }

  static const char* value(const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Command a desired joint. Note that the command is processed differently based on the joint's operating mode.\n"
"# For example, if a joint's operating mode is set to 'position', the command is interpreted as a position in radians\n"
"\n"
"string name          # Name of joint\n"
"float32 cmd          # Joint command\n"
;
  }

  static const char* value(const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointSingleCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_xs_sdk::JointSingleCommand_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "cmd: ";
    Printer<float>::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_XS_SDK_MESSAGE_JOINTSINGLECOMMAND_H
