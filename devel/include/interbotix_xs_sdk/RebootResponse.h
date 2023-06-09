// Generated by gencpp from file interbotix_xs_sdk/RebootResponse.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_XS_SDK_MESSAGE_REBOOTRESPONSE_H
#define INTERBOTIX_XS_SDK_MESSAGE_REBOOTRESPONSE_H


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
struct RebootResponse_
{
  typedef RebootResponse_<ContainerAllocator> Type;

  RebootResponse_()
    {
    }
  RebootResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RebootResponse_

typedef ::interbotix_xs_sdk::RebootResponse_<std::allocator<void> > RebootResponse;

typedef boost::shared_ptr< ::interbotix_xs_sdk::RebootResponse > RebootResponsePtr;
typedef boost::shared_ptr< ::interbotix_xs_sdk::RebootResponse const> RebootResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace interbotix_xs_sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_xs_sdk/RebootResponse";
  }

  static const char* value(const ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RebootResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::interbotix_xs_sdk::RebootResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_XS_SDK_MESSAGE_REBOOTRESPONSE_H
