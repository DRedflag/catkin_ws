// Generated by gencpp from file robotnik_elevator_interface_msgs/SetElevatorControl.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_SETELEVATORCONTROL_H
#define ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_SETELEVATORCONTROL_H

#include <ros/service_traits.h>


#include <robotnik_elevator_interface_msgs/SetElevatorControlRequest.h>
#include <robotnik_elevator_interface_msgs/SetElevatorControlResponse.h>


namespace robotnik_elevator_interface_msgs
{

struct SetElevatorControl
{

typedef SetElevatorControlRequest Request;
typedef SetElevatorControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetElevatorControl
} // namespace robotnik_elevator_interface_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControl > {
  static const char* value()
  {
    return "6e754663daea7761789300acea2dd9dd";
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControl&) { return value(); }
};

template<>
struct DataType< ::robotnik_elevator_interface_msgs::SetElevatorControl > {
  static const char* value()
  {
    return "robotnik_elevator_interface_msgs/SetElevatorControl";
  }

  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControl&) { return value(); }
};


// service_traits::MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest> should match
// service_traits::MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControl >
template<>
struct MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControl >::value();
  }
  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest> should match
// service_traits::DataType< ::robotnik_elevator_interface_msgs::SetElevatorControl >
template<>
struct DataType< ::robotnik_elevator_interface_msgs::SetElevatorControlRequest>
{
  static const char* value()
  {
    return DataType< ::robotnik_elevator_interface_msgs::SetElevatorControl >::value();
  }
  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControlResponse> should match
// service_traits::MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControl >
template<>
struct MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_elevator_interface_msgs::SetElevatorControl >::value();
  }
  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_elevator_interface_msgs::SetElevatorControlResponse> should match
// service_traits::DataType< ::robotnik_elevator_interface_msgs::SetElevatorControl >
template<>
struct DataType< ::robotnik_elevator_interface_msgs::SetElevatorControlResponse>
{
  static const char* value()
  {
    return DataType< ::robotnik_elevator_interface_msgs::SetElevatorControl >::value();
  }
  static const char* value(const ::robotnik_elevator_interface_msgs::SetElevatorControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTNIK_ELEVATOR_INTERFACE_MSGS_MESSAGE_SETELEVATORCONTROL_H
