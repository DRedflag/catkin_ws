// Generated by gencpp from file beginner_tutorial/AddTwoInts.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIAL_MESSAGE_ADDTWOINTS_H
#define BEGINNER_TUTORIAL_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <beginner_tutorial/AddTwoIntsRequest.h>
#include <beginner_tutorial/AddTwoIntsResponse.h>


namespace beginner_tutorial
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace beginner_tutorial


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::beginner_tutorial::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::beginner_tutorial::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::beginner_tutorial::AddTwoInts > {
  static const char* value()
  {
    return "beginner_tutorial/AddTwoInts";
  }

  static const char* value(const ::beginner_tutorial::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::beginner_tutorial::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::beginner_tutorial::AddTwoInts >
template<>
struct MD5Sum< ::beginner_tutorial::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorial::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorial::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorial::AddTwoIntsRequest> should match
// service_traits::DataType< ::beginner_tutorial::AddTwoInts >
template<>
struct DataType< ::beginner_tutorial::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorial::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorial::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::beginner_tutorial::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::beginner_tutorial::AddTwoInts >
template<>
struct MD5Sum< ::beginner_tutorial::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorial::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorial::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorial::AddTwoIntsResponse> should match
// service_traits::DataType< ::beginner_tutorial::AddTwoInts >
template<>
struct DataType< ::beginner_tutorial::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorial::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorial::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BEGINNER_TUTORIAL_MESSAGE_ADDTWOINTS_H
