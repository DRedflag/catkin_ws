// Generated by gencpp from file interbotix_xs_sdk/RegisterValues.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_XS_SDK_MESSAGE_REGISTERVALUES_H
#define INTERBOTIX_XS_SDK_MESSAGE_REGISTERVALUES_H

#include <ros/service_traits.h>


#include <interbotix_xs_sdk/RegisterValuesRequest.h>
#include <interbotix_xs_sdk/RegisterValuesResponse.h>


namespace interbotix_xs_sdk
{

struct RegisterValues
{

typedef RegisterValuesRequest Request;
typedef RegisterValuesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RegisterValues
} // namespace interbotix_xs_sdk


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::interbotix_xs_sdk::RegisterValues > {
  static const char* value()
  {
    return "27940ff80d633a7a6df113cf798c0f70";
  }

  static const char* value(const ::interbotix_xs_sdk::RegisterValues&) { return value(); }
};

template<>
struct DataType< ::interbotix_xs_sdk::RegisterValues > {
  static const char* value()
  {
    return "interbotix_xs_sdk/RegisterValues";
  }

  static const char* value(const ::interbotix_xs_sdk::RegisterValues&) { return value(); }
};


// service_traits::MD5Sum< ::interbotix_xs_sdk::RegisterValuesRequest> should match
// service_traits::MD5Sum< ::interbotix_xs_sdk::RegisterValues >
template<>
struct MD5Sum< ::interbotix_xs_sdk::RegisterValuesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::interbotix_xs_sdk::RegisterValues >::value();
  }
  static const char* value(const ::interbotix_xs_sdk::RegisterValuesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::interbotix_xs_sdk::RegisterValuesRequest> should match
// service_traits::DataType< ::interbotix_xs_sdk::RegisterValues >
template<>
struct DataType< ::interbotix_xs_sdk::RegisterValuesRequest>
{
  static const char* value()
  {
    return DataType< ::interbotix_xs_sdk::RegisterValues >::value();
  }
  static const char* value(const ::interbotix_xs_sdk::RegisterValuesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::interbotix_xs_sdk::RegisterValuesResponse> should match
// service_traits::MD5Sum< ::interbotix_xs_sdk::RegisterValues >
template<>
struct MD5Sum< ::interbotix_xs_sdk::RegisterValuesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::interbotix_xs_sdk::RegisterValues >::value();
  }
  static const char* value(const ::interbotix_xs_sdk::RegisterValuesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::interbotix_xs_sdk::RegisterValuesResponse> should match
// service_traits::DataType< ::interbotix_xs_sdk::RegisterValues >
template<>
struct DataType< ::interbotix_xs_sdk::RegisterValuesResponse>
{
  static const char* value()
  {
    return DataType< ::interbotix_xs_sdk::RegisterValues >::value();
  }
  static const char* value(const ::interbotix_xs_sdk::RegisterValuesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INTERBOTIX_XS_SDK_MESSAGE_REGISTERVALUES_H
