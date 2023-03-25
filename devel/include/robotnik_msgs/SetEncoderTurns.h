// Generated by gencpp from file robotnik_msgs/SetEncoderTurns.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SETENCODERTURNS_H
#define ROBOTNIK_MSGS_MESSAGE_SETENCODERTURNS_H

#include <ros/service_traits.h>


#include <robotnik_msgs/SetEncoderTurnsRequest.h>
#include <robotnik_msgs/SetEncoderTurnsResponse.h>


namespace robotnik_msgs
{

struct SetEncoderTurns
{

typedef SetEncoderTurnsRequest Request;
typedef SetEncoderTurnsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetEncoderTurns
} // namespace robotnik_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotnik_msgs::SetEncoderTurns > {
  static const char* value()
  {
    return "75098e1521736fbeb9e5afbd06f20712";
  }

  static const char* value(const ::robotnik_msgs::SetEncoderTurns&) { return value(); }
};

template<>
struct DataType< ::robotnik_msgs::SetEncoderTurns > {
  static const char* value()
  {
    return "robotnik_msgs/SetEncoderTurns";
  }

  static const char* value(const ::robotnik_msgs::SetEncoderTurns&) { return value(); }
};


// service_traits::MD5Sum< ::robotnik_msgs::SetEncoderTurnsRequest> should match
// service_traits::MD5Sum< ::robotnik_msgs::SetEncoderTurns >
template<>
struct MD5Sum< ::robotnik_msgs::SetEncoderTurnsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_msgs::SetEncoderTurns >::value();
  }
  static const char* value(const ::robotnik_msgs::SetEncoderTurnsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_msgs::SetEncoderTurnsRequest> should match
// service_traits::DataType< ::robotnik_msgs::SetEncoderTurns >
template<>
struct DataType< ::robotnik_msgs::SetEncoderTurnsRequest>
{
  static const char* value()
  {
    return DataType< ::robotnik_msgs::SetEncoderTurns >::value();
  }
  static const char* value(const ::robotnik_msgs::SetEncoderTurnsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotnik_msgs::SetEncoderTurnsResponse> should match
// service_traits::MD5Sum< ::robotnik_msgs::SetEncoderTurns >
template<>
struct MD5Sum< ::robotnik_msgs::SetEncoderTurnsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_msgs::SetEncoderTurns >::value();
  }
  static const char* value(const ::robotnik_msgs::SetEncoderTurnsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_msgs::SetEncoderTurnsResponse> should match
// service_traits::DataType< ::robotnik_msgs::SetEncoderTurns >
template<>
struct DataType< ::robotnik_msgs::SetEncoderTurnsResponse>
{
  static const char* value()
  {
    return DataType< ::robotnik_msgs::SetEncoderTurns >::value();
  }
  static const char* value(const ::robotnik_msgs::SetEncoderTurnsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SETENCODERTURNS_H
