// Generated by gencpp from file robotnik_msgs/PresenceSensor.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_PRESENCESENSOR_H
#define ROBOTNIK_MSGS_MESSAGE_PRESENCESENSOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace robotnik_msgs
{
template <class ContainerAllocator>
struct PresenceSensor_
{
  typedef PresenceSensor_<ContainerAllocator> Type;

  PresenceSensor_()
    : header()
    , pose()
    , sensor_id()
    , sensor_type()
    , detected_id()
    , zone()
    , enabled(false)
    , value(false)  {
    }
  PresenceSensor_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , sensor_id(_alloc)
    , sensor_type(_alloc)
    , detected_id(_alloc)
    , zone(_alloc)
    , enabled(false)
    , value(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _sensor_id_type;
  _sensor_id_type sensor_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _sensor_type_type;
  _sensor_type_type sensor_type;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _detected_id_type;
  _detected_id_type detected_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _zone_type;
  _zone_type zone;

   typedef uint8_t _enabled_type;
  _enabled_type enabled;

   typedef uint8_t _value_type;
  _value_type value;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CAMERA)
  #undef CAMERA
#endif
#if defined(_WIN32) && defined(PHOTOCELL)
  #undef PHOTOCELL
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CAMERA;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PHOTOCELL;

  typedef boost::shared_ptr< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> const> ConstPtr;

}; // struct PresenceSensor_

typedef ::robotnik_msgs::PresenceSensor_<std::allocator<void> > PresenceSensor;

typedef boost::shared_ptr< ::robotnik_msgs::PresenceSensor > PresenceSensorPtr;
typedef boost::shared_ptr< ::robotnik_msgs::PresenceSensor const> PresenceSensorConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      PresenceSensor_<ContainerAllocator>::CAMERA =
        
          "camera"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      PresenceSensor_<ContainerAllocator>::PHOTOCELL =
        
          "photocell"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::PresenceSensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::PresenceSensor_<ContainerAllocator1> & lhs, const ::robotnik_msgs::PresenceSensor_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pose == rhs.pose &&
    lhs.sensor_id == rhs.sensor_id &&
    lhs.sensor_type == rhs.sensor_type &&
    lhs.detected_id == rhs.detected_id &&
    lhs.zone == rhs.zone &&
    lhs.enabled == rhs.enabled &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::PresenceSensor_<ContainerAllocator1> & lhs, const ::robotnik_msgs::PresenceSensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d655196d2d8c595af378ef8e462eca4a";
  }

  static const char* value(const ::robotnik_msgs::PresenceSensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd655196d2d8c595aULL;
  static const uint64_t static_value2 = 0xf378ef8e462eca4aULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/PresenceSensor";
  }

  static const char* value(const ::robotnik_msgs::PresenceSensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string CAMERA=camera\n"
"string PHOTOCELL=photocell\n"
"\n"
"Header header\n"
"geometry_msgs/Pose pose\n"
"string sensor_id # Which sensor is detecting the object (which camera or which photocell)\n"
"string sensor_type # camera or photocell\n"
"string detected_id # if QR is being detected, in photocell would be void\n"
"string zone \n"
"bool enabled # Determines if the sensor is on or off \n"
"bool value # Determines whether the sensor is detecting the object\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::robotnik_msgs::PresenceSensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.sensor_id);
      stream.next(m.sensor_type);
      stream.next(m.detected_id);
      stream.next(m.zone);
      stream.next(m.enabled);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PresenceSensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::PresenceSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::PresenceSensor_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "sensor_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.sensor_id);
    s << indent << "sensor_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.sensor_type);
    s << indent << "detected_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.detected_id);
    s << indent << "zone: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.zone);
    s << indent << "enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enabled);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_PRESENCESENSOR_H