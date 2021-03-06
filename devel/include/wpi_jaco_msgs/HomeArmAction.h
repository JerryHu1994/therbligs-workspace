// Generated by gencpp from file wpi_jaco_msgs/HomeArmAction.msg
// DO NOT EDIT!


#ifndef WPI_JACO_MSGS_MESSAGE_HOMEARMACTION_H
#define WPI_JACO_MSGS_MESSAGE_HOMEARMACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <wpi_jaco_msgs/HomeArmActionGoal.h>
#include <wpi_jaco_msgs/HomeArmActionResult.h>
#include <wpi_jaco_msgs/HomeArmActionFeedback.h>

namespace wpi_jaco_msgs
{
template <class ContainerAllocator>
struct HomeArmAction_
{
  typedef HomeArmAction_<ContainerAllocator> Type;

  HomeArmAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  HomeArmAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::wpi_jaco_msgs::HomeArmActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::wpi_jaco_msgs::HomeArmActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::wpi_jaco_msgs::HomeArmActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> const> ConstPtr;

}; // struct HomeArmAction_

typedef ::wpi_jaco_msgs::HomeArmAction_<std::allocator<void> > HomeArmAction;

typedef boost::shared_ptr< ::wpi_jaco_msgs::HomeArmAction > HomeArmActionPtr;
typedef boost::shared_ptr< ::wpi_jaco_msgs::HomeArmAction const> HomeArmActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wpi_jaco_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'wpi_jaco_msgs': ['/home/hcilab/Documents/jieru/NRI-authoring-Backend/src/wpi_jaco/wpi_jaco_msgs/msg', '/home/hcilab/Documents/jieru/NRI-authoring-Backend/devel/share/wpi_jaco_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4949ebff8e2a96434fb0a1cc144d935f";
  }

  static const char* value(const ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4949ebff8e2a9643ULL;
  static const uint64_t static_value2 = 0x4fb0a1cc144d935fULL;
};

template<class ContainerAllocator>
struct DataType< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wpi_jaco_msgs/HomeArmAction";
  }

  static const char* value(const ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
HomeArmActionGoal action_goal\n\
HomeArmActionResult action_result\n\
HomeArmActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/HomeArmActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
HomeArmGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/HomeArmGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
bool retract                                  # set to true to retract arm to a given position after moving home\n\
wpi_jaco_msgs/AngularCommand retractPosition  # position to which the arm should retract (only if retract is true)\n\
int16 numAttempts                                # attempts for moving to given joint pose (only used in motion planning versions)\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/AngularCommand\n\
bool position       # true for a position command, false for a velocity command\n\
bool armCommand     # true if this command includes arm joint inputs\n\
bool fingerCommand  # true if this command includes finger inputs\n\
bool repeat         # true if the command should be repeatedly sent over a short interval\n\
float32[] joints    # position (rad) or velocity (rad/s) arm command\n\
float32[] fingers   # position (rad) or velocity (rad/s) finger command\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/HomeArmActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
HomeArmResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/HomeArmResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
bool success                                  # true if arm move was successful\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/HomeArmActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
HomeArmFeedback feedback\n\
\n\
================================================================================\n\
MSG: wpi_jaco_msgs/HomeArmFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define feedback message\n\
\n\
";
  }

  static const char* value(const ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HomeArmAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wpi_jaco_msgs::HomeArmAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::wpi_jaco_msgs::HomeArmActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::wpi_jaco_msgs::HomeArmActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::wpi_jaco_msgs::HomeArmActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WPI_JACO_MSGS_MESSAGE_HOMEARMACTION_H
