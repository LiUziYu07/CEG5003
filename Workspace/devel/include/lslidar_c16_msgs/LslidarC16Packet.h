// Generated by gencpp from file lslidar_c16_msgs/LslidarC16Packet.msg
// DO NOT EDIT!


#ifndef LSLIDAR_C16_MSGS_MESSAGE_LSLIDARC16PACKET_H
#define LSLIDAR_C16_MSGS_MESSAGE_LSLIDARC16PACKET_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lslidar_c16_msgs
{
template <class ContainerAllocator>
struct LslidarC16Packet_
{
  typedef LslidarC16Packet_<ContainerAllocator> Type;

  LslidarC16Packet_()
    : stamp()
    , data()  {
      data.assign(0);
  }
  LslidarC16Packet_(const ContainerAllocator& _alloc)
    : stamp()
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef boost::array<uint8_t, 1206>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> const> ConstPtr;

}; // struct LslidarC16Packet_

typedef ::lslidar_c16_msgs::LslidarC16Packet_<std::allocator<void> > LslidarC16Packet;

typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Packet > LslidarC16PacketPtr;
typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Packet const> LslidarC16PacketConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator1> & lhs, const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator1> & lhs, const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lslidar_c16_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae4f90a23256f44e82baa08dd45c3456";
  }

  static const char* value(const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae4f90a23256f44eULL;
  static const uint64_t static_value2 = 0x82baa08dd45c3456ULL;
};

template<class ContainerAllocator>
struct DataType< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lslidar_c16_msgs/LslidarC16Packet";
  }

  static const char* value(const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Raw Leishen LIDAR packet.\n"
"\n"
"time stamp              # packet timestamp\n"
"uint8[1206] data        # packet contents\n"
"\n"
;
  }

  static const char* value(const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LslidarC16Packet_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lslidar_c16_msgs::LslidarC16Packet_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSLIDAR_C16_MSGS_MESSAGE_LSLIDARC16PACKET_H
