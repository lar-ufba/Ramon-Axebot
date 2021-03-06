// Generated by gencpp from file ros_gui/RX_data.msg
// DO NOT EDIT!


#ifndef ROS_GUI_MESSAGE_RX_DATA_H
#define ROS_GUI_MESSAGE_RX_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_gui
{
template <class ContainerAllocator>
struct RX_data_
{
  typedef RX_data_<ContainerAllocator> Type;

  RX_data_()
    : m1_velocity(0)
    , m2_velocity(0)
    , m3_velocity(0)
    , m1_current(0)
    , m2_current(0)
    , m3_current(0)
    , x_acelleration(0)
    , y_acelleration(0)
    , angular_velocity(0)
    , compass(0)
    , m1_dutycycle(0)
    , m2_dutycycle(0)
    , m3_dutycycle(0)
    , m1_setpoint(0)
    , m2_setpoint(0)
    , m3_setpoint(0)
    , m1_inc_control_signal(0.0)
    , m2_inc_control_signal(0.0)
    , m3_inc_control_signal(0.0)
    , m1_control_signal(0.0)
    , m2_control_signal(0.0)
    , m3_control_signal(0.0)
    , V(0.0)
    , Vn(0.0)
    , W(0.0)
    , delta_time(0)
    , X_robot(0.0)
    , Y_robot(0.0)
    , Theta_robot(0.0)
    , Vref(0.0)
    , Vnref(0.0)
    , Wref(0.0)
    , X_robot_Odom(0.0)
    , Y_robot_Odom(0.0)
    , Theta_robot_Odom(0.0)
    , X_v1(0.0)
    , Y_v1(0.0)
    , Theta_v1(0.0)
    , id_v1(0.0)
    , X_v2(0.0)
    , Y_v2(0.0)
    , Theta_v2(0.0)
    , id_v2(0.0)  {
    }
  RX_data_(const ContainerAllocator& _alloc)
    : m1_velocity(0)
    , m2_velocity(0)
    , m3_velocity(0)
    , m1_current(0)
    , m2_current(0)
    , m3_current(0)
    , x_acelleration(0)
    , y_acelleration(0)
    , angular_velocity(0)
    , compass(0)
    , m1_dutycycle(0)
    , m2_dutycycle(0)
    , m3_dutycycle(0)
    , m1_setpoint(0)
    , m2_setpoint(0)
    , m3_setpoint(0)
    , m1_inc_control_signal(0.0)
    , m2_inc_control_signal(0.0)
    , m3_inc_control_signal(0.0)
    , m1_control_signal(0.0)
    , m2_control_signal(0.0)
    , m3_control_signal(0.0)
    , V(0.0)
    , Vn(0.0)
    , W(0.0)
    , delta_time(0)
    , X_robot(0.0)
    , Y_robot(0.0)
    , Theta_robot(0.0)
    , Vref(0.0)
    , Vnref(0.0)
    , Wref(0.0)
    , X_robot_Odom(0.0)
    , Y_robot_Odom(0.0)
    , Theta_robot_Odom(0.0)
    , X_v1(0.0)
    , Y_v1(0.0)
    , Theta_v1(0.0)
    , id_v1(0.0)
    , X_v2(0.0)
    , Y_v2(0.0)
    , Theta_v2(0.0)
    , id_v2(0.0)  {
    }



   typedef int16_t _m1_velocity_type;
  _m1_velocity_type m1_velocity;

   typedef int16_t _m2_velocity_type;
  _m2_velocity_type m2_velocity;

   typedef int16_t _m3_velocity_type;
  _m3_velocity_type m3_velocity;

   typedef int16_t _m1_current_type;
  _m1_current_type m1_current;

   typedef int16_t _m2_current_type;
  _m2_current_type m2_current;

   typedef int16_t _m3_current_type;
  _m3_current_type m3_current;

   typedef int16_t _x_acelleration_type;
  _x_acelleration_type x_acelleration;

   typedef int16_t _y_acelleration_type;
  _y_acelleration_type y_acelleration;

   typedef int16_t _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef int16_t _compass_type;
  _compass_type compass;

   typedef int8_t _m1_dutycycle_type;
  _m1_dutycycle_type m1_dutycycle;

   typedef int8_t _m2_dutycycle_type;
  _m2_dutycycle_type m2_dutycycle;

   typedef int8_t _m3_dutycycle_type;
  _m3_dutycycle_type m3_dutycycle;

   typedef int16_t _m1_setpoint_type;
  _m1_setpoint_type m1_setpoint;

   typedef int16_t _m2_setpoint_type;
  _m2_setpoint_type m2_setpoint;

   typedef int16_t _m3_setpoint_type;
  _m3_setpoint_type m3_setpoint;

   typedef double _m1_inc_control_signal_type;
  _m1_inc_control_signal_type m1_inc_control_signal;

   typedef double _m2_inc_control_signal_type;
  _m2_inc_control_signal_type m2_inc_control_signal;

   typedef double _m3_inc_control_signal_type;
  _m3_inc_control_signal_type m3_inc_control_signal;

   typedef double _m1_control_signal_type;
  _m1_control_signal_type m1_control_signal;

   typedef double _m2_control_signal_type;
  _m2_control_signal_type m2_control_signal;

   typedef double _m3_control_signal_type;
  _m3_control_signal_type m3_control_signal;

   typedef double _V_type;
  _V_type V;

   typedef double _Vn_type;
  _Vn_type Vn;

   typedef double _W_type;
  _W_type W;

   typedef int16_t _delta_time_type;
  _delta_time_type delta_time;

   typedef double _X_robot_type;
  _X_robot_type X_robot;

   typedef double _Y_robot_type;
  _Y_robot_type Y_robot;

   typedef double _Theta_robot_type;
  _Theta_robot_type Theta_robot;

   typedef double _Vref_type;
  _Vref_type Vref;

   typedef double _Vnref_type;
  _Vnref_type Vnref;

   typedef double _Wref_type;
  _Wref_type Wref;

   typedef double _X_robot_Odom_type;
  _X_robot_Odom_type X_robot_Odom;

   typedef double _Y_robot_Odom_type;
  _Y_robot_Odom_type Y_robot_Odom;

   typedef double _Theta_robot_Odom_type;
  _Theta_robot_Odom_type Theta_robot_Odom;

   typedef double _X_v1_type;
  _X_v1_type X_v1;

   typedef double _Y_v1_type;
  _Y_v1_type Y_v1;

   typedef double _Theta_v1_type;
  _Theta_v1_type Theta_v1;

   typedef double _id_v1_type;
  _id_v1_type id_v1;

   typedef double _X_v2_type;
  _X_v2_type X_v2;

   typedef double _Y_v2_type;
  _Y_v2_type Y_v2;

   typedef double _Theta_v2_type;
  _Theta_v2_type Theta_v2;

   typedef double _id_v2_type;
  _id_v2_type id_v2;




  typedef boost::shared_ptr< ::ros_gui::RX_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_gui::RX_data_<ContainerAllocator> const> ConstPtr;

}; // struct RX_data_

typedef ::ros_gui::RX_data_<std::allocator<void> > RX_data;

typedef boost::shared_ptr< ::ros_gui::RX_data > RX_dataPtr;
typedef boost::shared_ptr< ::ros_gui::RX_data const> RX_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_gui::RX_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_gui::RX_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_gui

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ros_gui': ['/home/ramonoliveira/catkin_ws/src/ros_gui/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_gui::RX_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_gui::RX_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_gui::RX_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_gui::RX_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_gui::RX_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_gui::RX_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_gui::RX_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9cbb632bcd28f1c68281f54e66f805fd";
  }

  static const char* value(const ::ros_gui::RX_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9cbb632bcd28f1c6ULL;
  static const uint64_t static_value2 = 0x8281f54e66f805fdULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_gui::RX_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_gui/RX_data";
  }

  static const char* value(const ::ros_gui::RX_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_gui::RX_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 m1_velocity\n\
int16 m2_velocity\n\
int16 m3_velocity\n\
int16 m1_current\n\
int16 m2_current\n\
int16 m3_current\n\
int16 x_acelleration\n\
int16 y_acelleration\n\
int16 angular_velocity\n\
int16 compass\n\
int8 m1_dutycycle\n\
int8 m2_dutycycle\n\
int8 m3_dutycycle\n\
int16 m1_setpoint\n\
int16 m2_setpoint\n\
int16 m3_setpoint\n\
float64 m1_inc_control_signal\n\
float64 m2_inc_control_signal\n\
float64 m3_inc_control_signal\n\
float64 m1_control_signal\n\
float64 m2_control_signal\n\
float64 m3_control_signal\n\
float64 V\n\
float64 Vn\n\
float64 W\n\
int16 delta_time\n\
float64 X_robot\n\
float64 Y_robot\n\
float64 Theta_robot\n\
float64 Vref\n\
float64 Vnref\n\
float64 Wref\n\
float64 X_robot_Odom\n\
float64 Y_robot_Odom\n\
float64 Theta_robot_Odom\n\
float64 X_v1\n\
float64 Y_v1\n\
float64 Theta_v1\n\
float64 id_v1\n\
float64 X_v2\n\
float64 Y_v2\n\
float64 Theta_v2\n\
float64 id_v2\n\
";
  }

  static const char* value(const ::ros_gui::RX_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_gui::RX_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.m1_velocity);
      stream.next(m.m2_velocity);
      stream.next(m.m3_velocity);
      stream.next(m.m1_current);
      stream.next(m.m2_current);
      stream.next(m.m3_current);
      stream.next(m.x_acelleration);
      stream.next(m.y_acelleration);
      stream.next(m.angular_velocity);
      stream.next(m.compass);
      stream.next(m.m1_dutycycle);
      stream.next(m.m2_dutycycle);
      stream.next(m.m3_dutycycle);
      stream.next(m.m1_setpoint);
      stream.next(m.m2_setpoint);
      stream.next(m.m3_setpoint);
      stream.next(m.m1_inc_control_signal);
      stream.next(m.m2_inc_control_signal);
      stream.next(m.m3_inc_control_signal);
      stream.next(m.m1_control_signal);
      stream.next(m.m2_control_signal);
      stream.next(m.m3_control_signal);
      stream.next(m.V);
      stream.next(m.Vn);
      stream.next(m.W);
      stream.next(m.delta_time);
      stream.next(m.X_robot);
      stream.next(m.Y_robot);
      stream.next(m.Theta_robot);
      stream.next(m.Vref);
      stream.next(m.Vnref);
      stream.next(m.Wref);
      stream.next(m.X_robot_Odom);
      stream.next(m.Y_robot_Odom);
      stream.next(m.Theta_robot_Odom);
      stream.next(m.X_v1);
      stream.next(m.Y_v1);
      stream.next(m.Theta_v1);
      stream.next(m.id_v1);
      stream.next(m.X_v2);
      stream.next(m.Y_v2);
      stream.next(m.Theta_v2);
      stream.next(m.id_v2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RX_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_gui::RX_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_gui::RX_data_<ContainerAllocator>& v)
  {
    s << indent << "m1_velocity: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m1_velocity);
    s << indent << "m2_velocity: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m2_velocity);
    s << indent << "m3_velocity: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m3_velocity);
    s << indent << "m1_current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m1_current);
    s << indent << "m2_current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m2_current);
    s << indent << "m3_current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m3_current);
    s << indent << "x_acelleration: ";
    Printer<int16_t>::stream(s, indent + "  ", v.x_acelleration);
    s << indent << "y_acelleration: ";
    Printer<int16_t>::stream(s, indent + "  ", v.y_acelleration);
    s << indent << "angular_velocity: ";
    Printer<int16_t>::stream(s, indent + "  ", v.angular_velocity);
    s << indent << "compass: ";
    Printer<int16_t>::stream(s, indent + "  ", v.compass);
    s << indent << "m1_dutycycle: ";
    Printer<int8_t>::stream(s, indent + "  ", v.m1_dutycycle);
    s << indent << "m2_dutycycle: ";
    Printer<int8_t>::stream(s, indent + "  ", v.m2_dutycycle);
    s << indent << "m3_dutycycle: ";
    Printer<int8_t>::stream(s, indent + "  ", v.m3_dutycycle);
    s << indent << "m1_setpoint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m1_setpoint);
    s << indent << "m2_setpoint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m2_setpoint);
    s << indent << "m3_setpoint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.m3_setpoint);
    s << indent << "m1_inc_control_signal: ";
    Printer<double>::stream(s, indent + "  ", v.m1_inc_control_signal);
    s << indent << "m2_inc_control_signal: ";
    Printer<double>::stream(s, indent + "  ", v.m2_inc_control_signal);
    s << indent << "m3_inc_control_signal: ";
    Printer<double>::stream(s, indent + "  ", v.m3_inc_control_signal);
    s << indent << "m1_control_signal: ";
    Printer<double>::stream(s, indent + "  ", v.m1_control_signal);
    s << indent << "m2_control_signal: ";
    Printer<double>::stream(s, indent + "  ", v.m2_control_signal);
    s << indent << "m3_control_signal: ";
    Printer<double>::stream(s, indent + "  ", v.m3_control_signal);
    s << indent << "V: ";
    Printer<double>::stream(s, indent + "  ", v.V);
    s << indent << "Vn: ";
    Printer<double>::stream(s, indent + "  ", v.Vn);
    s << indent << "W: ";
    Printer<double>::stream(s, indent + "  ", v.W);
    s << indent << "delta_time: ";
    Printer<int16_t>::stream(s, indent + "  ", v.delta_time);
    s << indent << "X_robot: ";
    Printer<double>::stream(s, indent + "  ", v.X_robot);
    s << indent << "Y_robot: ";
    Printer<double>::stream(s, indent + "  ", v.Y_robot);
    s << indent << "Theta_robot: ";
    Printer<double>::stream(s, indent + "  ", v.Theta_robot);
    s << indent << "Vref: ";
    Printer<double>::stream(s, indent + "  ", v.Vref);
    s << indent << "Vnref: ";
    Printer<double>::stream(s, indent + "  ", v.Vnref);
    s << indent << "Wref: ";
    Printer<double>::stream(s, indent + "  ", v.Wref);
    s << indent << "X_robot_Odom: ";
    Printer<double>::stream(s, indent + "  ", v.X_robot_Odom);
    s << indent << "Y_robot_Odom: ";
    Printer<double>::stream(s, indent + "  ", v.Y_robot_Odom);
    s << indent << "Theta_robot_Odom: ";
    Printer<double>::stream(s, indent + "  ", v.Theta_robot_Odom);
    s << indent << "X_v1: ";
    Printer<double>::stream(s, indent + "  ", v.X_v1);
    s << indent << "Y_v1: ";
    Printer<double>::stream(s, indent + "  ", v.Y_v1);
    s << indent << "Theta_v1: ";
    Printer<double>::stream(s, indent + "  ", v.Theta_v1);
    s << indent << "id_v1: ";
    Printer<double>::stream(s, indent + "  ", v.id_v1);
    s << indent << "X_v2: ";
    Printer<double>::stream(s, indent + "  ", v.X_v2);
    s << indent << "Y_v2: ";
    Printer<double>::stream(s, indent + "  ", v.Y_v2);
    s << indent << "Theta_v2: ";
    Printer<double>::stream(s, indent + "  ", v.Theta_v2);
    s << indent << "id_v2: ";
    Printer<double>::stream(s, indent + "  ", v.id_v2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_GUI_MESSAGE_RX_DATA_H
