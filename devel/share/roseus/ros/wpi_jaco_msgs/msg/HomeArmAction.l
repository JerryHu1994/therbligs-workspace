;; Auto-generated. Do not edit!


(when (boundp 'wpi_jaco_msgs::HomeArmAction)
  (if (not (find-package "WPI_JACO_MSGS"))
    (make-package "WPI_JACO_MSGS"))
  (shadow 'HomeArmAction (find-package "WPI_JACO_MSGS")))
(unless (find-package "WPI_JACO_MSGS::HOMEARMACTION")
  (make-package "WPI_JACO_MSGS::HOMEARMACTION"))

(in-package "ROS")
;;//! \htmlinclude HomeArmAction.msg.html


(defclass wpi_jaco_msgs::HomeArmAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod wpi_jaco_msgs::HomeArmAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance wpi_jaco_msgs::HomeArmActionGoal :init))
    ((:action_result __action_result) (instance wpi_jaco_msgs::HomeArmActionResult :init))
    ((:action_feedback __action_feedback) (instance wpi_jaco_msgs::HomeArmActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; wpi_jaco_msgs/HomeArmActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; wpi_jaco_msgs/HomeArmActionResult _action_result
    (send _action_result :serialization-length)
    ;; wpi_jaco_msgs/HomeArmActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; wpi_jaco_msgs/HomeArmActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; wpi_jaco_msgs/HomeArmActionResult _action_result
       (send _action_result :serialize s)
     ;; wpi_jaco_msgs/HomeArmActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; wpi_jaco_msgs/HomeArmActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; wpi_jaco_msgs/HomeArmActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; wpi_jaco_msgs/HomeArmActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get wpi_jaco_msgs::HomeArmAction :md5sum-) "4949ebff8e2a96434fb0a1cc144d935f")
(setf (get wpi_jaco_msgs::HomeArmAction :datatype-) "wpi_jaco_msgs/HomeArmAction")
(setf (get wpi_jaco_msgs::HomeArmAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

HomeArmActionGoal action_goal
HomeArmActionResult action_result
HomeArmActionFeedback action_feedback

================================================================================
MSG: wpi_jaco_msgs/HomeArmActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
HomeArmGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: wpi_jaco_msgs/HomeArmGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the goal
bool retract                                  # set to true to retract arm to a given position after moving home
wpi_jaco_msgs/AngularCommand retractPosition  # position to which the arm should retract (only if retract is true)
int16 numAttempts                                # attempts for moving to given joint pose (only used in motion planning versions)

================================================================================
MSG: wpi_jaco_msgs/AngularCommand
bool position       # true for a position command, false for a velocity command
bool armCommand     # true if this command includes arm joint inputs
bool fingerCommand  # true if this command includes finger inputs
bool repeat         # true if the command should be repeatedly sent over a short interval
float32[] joints    # position (rad) or velocity (rad/s) arm command
float32[] fingers   # position (rad) or velocity (rad/s) finger command

================================================================================
MSG: wpi_jaco_msgs/HomeArmActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
HomeArmResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: wpi_jaco_msgs/HomeArmResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the result
bool success                                  # true if arm move was successful

================================================================================
MSG: wpi_jaco_msgs/HomeArmActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
HomeArmFeedback feedback

================================================================================
MSG: wpi_jaco_msgs/HomeArmFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define feedback message


")



(provide :wpi_jaco_msgs/HomeArmAction "4949ebff8e2a96434fb0a1cc144d935f")


