// Generated by gencpp from file commande_baxter/bool_stateRequest.msg
// DO NOT EDIT!


#ifndef COMMANDE_BAXTER_MESSAGE_BOOL_STATEREQUEST_H
#define COMMANDE_BAXTER_MESSAGE_BOOL_STATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Empty.h>

namespace commande_baxter
{
template <class ContainerAllocator>
struct bool_stateRequest_
{
  typedef bool_stateRequest_<ContainerAllocator> Type;

  bool_stateRequest_()
    : vide()  {
    }
  bool_stateRequest_(const ContainerAllocator& _alloc)
    : vide(_alloc)  {
    }



   typedef  ::std_msgs::Empty_<ContainerAllocator>  _vide_type;
  _vide_type vide;




  typedef boost::shared_ptr< ::commande_baxter::bool_stateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::commande_baxter::bool_stateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct bool_stateRequest_

typedef ::commande_baxter::bool_stateRequest_<std::allocator<void> > bool_stateRequest;

typedef boost::shared_ptr< ::commande_baxter::bool_stateRequest > bool_stateRequestPtr;
typedef boost::shared_ptr< ::commande_baxter::bool_stateRequest const> bool_stateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::commande_baxter::bool_stateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace commande_baxter

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::commande_baxter::bool_stateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande_baxter::bool_stateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande_baxter::bool_stateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "182aedd557138cf6a8c544cc8c5f2ac8";
  }

  static const char* value(const ::commande_baxter::bool_stateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x182aedd557138cf6ULL;
  static const uint64_t static_value2 = 0xa8c544cc8c5f2ac8ULL;
};

template<class ContainerAllocator>
struct DataType< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "commande_baxter/bool_stateRequest";
  }

  static const char* value(const ::commande_baxter::bool_stateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Empty vide\n\
\n\
================================================================================\n\
MSG: std_msgs/Empty\n\
";
  }

  static const char* value(const ::commande_baxter::bool_stateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vide);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct bool_stateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::commande_baxter::bool_stateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::commande_baxter::bool_stateRequest_<ContainerAllocator>& v)
  {
    s << indent << "vide: ";
    s << std::endl;
    Printer< ::std_msgs::Empty_<ContainerAllocator> >::stream(s, indent + "  ", v.vide);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMANDE_BAXTER_MESSAGE_BOOL_STATEREQUEST_H
