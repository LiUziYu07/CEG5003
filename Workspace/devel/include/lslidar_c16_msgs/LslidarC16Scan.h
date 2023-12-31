// Generated by gencpp from file lslidar_c16_msgs/LslidarC16Scan.msg
// DO NOT EDIT!


#ifndef LSLIDAR_C16_MSGS_MESSAGE_LSLIDARC16SCAN_H
#define LSLIDAR_C16_MSGS_MESSAGE_LSLIDARC16SCAN_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <lslidar_c16_msgs/LslidarC16Point.h>

namespace lslidar_c16_msgs
{
template <class ContainerAllocator>
struct LslidarC16Scan_
{
  typedef LslidarC16Scan_<ContainerAllocator> Type;

  LslidarC16Scan_()
    : altitude(0.0)
    , points()  {
    }
  LslidarC16Scan_(const ContainerAllocator& _alloc)
    : altitude(0.0)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef double _altitude_type;
  _altitude_type altitude;

   typedef std::vector< ::lslidar_c16_msgs::LslidarC16Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::lslidar_c16_msgs::LslidarC16Point_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> const> ConstPtr;

}; // struct LslidarC16Scan_

typedef ::lslidar_c16_msgs::LslidarC16Scan_<std::allocator<void> > LslidarC16Scan;

typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Scan > LslidarC16ScanPtr;
typedef boost::shared_ptr< ::lslidar_c16_msgs::LslidarC16Scan const> LslidarC16ScanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator1> & lhs, const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator2> & rhs)
{
  return lhs.altitude == rhs.altitude &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator1> & lhs, const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lslidar_c16_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcd29f667509c681a7820aacabe51d58";
  }

  static const char* value(const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbcd29f667509c681ULL;
  static const uint64_t static_value2 = 0xa7820aacabe51d58ULL;
};

template<class ContainerAllocator>
struct DataType< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lslidar_c16_msgs/LslidarC16Scan";
  }

  static const char* value(const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Altitude of all the points within this scan\n"
"float64 altitude\n"
"\n"
"# The valid points in this scan sorted by azimuth\n"
"# from 0 to 359.99\n"
"LslidarC16Point[] points\n"
"\n"
"================================================================================\n"
"MSG: lslidar_c16_msgs/LslidarC16Point\n"
"# Time when the point is captured\n"
"float32 time\n"
"\n"
"# Converted distance in the sensor frame\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"# Raw measurement from Leishen C16\n"
"float64 azimuth\n"
"float64 distance\n"
"float64 intensity\n"
;
  }

  static const char* value(const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.altitude);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LslidarC16Scan_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lslidar_c16_msgs::LslidarC16Scan_<ContainerAllocator>& v)
  {
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::lslidar_c16_msgs::LslidarC16Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSLIDAR_C16_MSGS_MESSAGE_LSLIDARC16SCAN_H
