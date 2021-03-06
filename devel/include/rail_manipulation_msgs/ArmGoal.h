// Generated by gencpp from file rail_manipulation_msgs/ArmGoal.msg
// DO NOT EDIT!


#ifndef RAIL_MANIPULATION_MSGS_MESSAGE_ARMGOAL_H
#define RAIL_MANIPULATION_MSGS_MESSAGE_ARMGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rail_manipulation_msgs
{
template <class ContainerAllocator>
struct ArmGoal_
{
  typedef ArmGoal_<ContainerAllocator> Type;

  ArmGoal_()
    : action(0)  {
    }
  ArmGoal_(const ContainerAllocator& _alloc)
    : action(0)  {
  (void)_alloc;
    }



   typedef uint8_t _action_type;
  _action_type action;


    enum { READY = 0u };
     enum { RETRACT = 1u };
 

  typedef boost::shared_ptr< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ArmGoal_

typedef ::rail_manipulation_msgs::ArmGoal_<std::allocator<void> > ArmGoal;

typedef boost::shared_ptr< ::rail_manipulation_msgs::ArmGoal > ArmGoalPtr;
typedef boost::shared_ptr< ::rail_manipulation_msgs::ArmGoal const> ArmGoalConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rail_manipulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rail_manipulation_msgs': ['/home/jerry/Desktop/therbligs_ws/src/rail_manipulation_msgs/msg', '/home/jerry/Desktop/therbligs_ws/devel/share/rail_manipulation_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "583c8d0f2adc8d2d78bcbe7fe1436840";
  }

  static const char* value(const ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x583c8d0f2adc8d2dULL;
  static const uint64_t static_value2 = 0x78bcbe7fe1436840ULL;
};

template<class ContainerAllocator>
struct DataType< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rail_manipulation_msgs/ArmGoal";
  }

  static const char* value(const ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# valid actions\n\
uint8 READY=0\n\
uint8 RETRACT=1\n\
\n\
uint8 action  #action that the arm should take\n\
";
  }

  static const char* value(const ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArmGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rail_manipulation_msgs::ArmGoal_<ContainerAllocator>& v)
  {
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAIL_MANIPULATION_MSGS_MESSAGE_ARMGOAL_H
