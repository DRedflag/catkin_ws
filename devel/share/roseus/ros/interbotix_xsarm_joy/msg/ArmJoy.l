;; Auto-generated. Do not edit!


(when (boundp 'interbotix_xsarm_joy::ArmJoy)
  (if (not (find-package "INTERBOTIX_XSARM_JOY"))
    (make-package "INTERBOTIX_XSARM_JOY"))
  (shadow 'ArmJoy (find-package "INTERBOTIX_XSARM_JOY")))
(unless (find-package "INTERBOTIX_XSARM_JOY::ARMJOY")
  (make-package "INTERBOTIX_XSARM_JOY::ARMJOY"))

(in-package "ROS")
;;//! \htmlinclude ArmJoy.msg.html


(intern "*EE_X_INC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_X_INC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_X_INC* 1)
(intern "*EE_X_DEC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_X_DEC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_X_DEC* 2)
(intern "*EE_Y_INC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_Y_INC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_Y_INC* 3)
(intern "*EE_Y_DEC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_Y_DEC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_Y_DEC* 4)
(intern "*EE_Z_INC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_Z_INC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_Z_INC* 5)
(intern "*EE_Z_DEC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_Z_DEC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_Z_DEC* 6)
(intern "*EE_ROLL_CCW*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_ROLL_CCW* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_ROLL_CCW* 7)
(intern "*EE_ROLL_CW*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_ROLL_CW* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_ROLL_CW* 8)
(intern "*EE_PITCH_UP*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_PITCH_UP* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_PITCH_UP* 9)
(intern "*EE_PITCH_DOWN*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*EE_PITCH_DOWN* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*EE_PITCH_DOWN* 10)
(intern "*WAIST_CCW*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*WAIST_CCW* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*WAIST_CCW* 11)
(intern "*WAIST_CW*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*WAIST_CW* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*WAIST_CW* 12)
(intern "*GRIPPER_OPEN*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*GRIPPER_OPEN* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*GRIPPER_OPEN* 13)
(intern "*GRIPPER_CLOSE*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*GRIPPER_CLOSE* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*GRIPPER_CLOSE* 14)
(intern "*HOME_POSE*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*HOME_POSE* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*HOME_POSE* 15)
(intern "*SLEEP_POSE*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*SLEEP_POSE* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*SLEEP_POSE* 16)
(intern "*SPEED_INC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*SPEED_INC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*SPEED_INC* 17)
(intern "*SPEED_DEC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*SPEED_DEC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*SPEED_DEC* 18)
(intern "*SPEED_COURSE*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*SPEED_COURSE* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*SPEED_COURSE* 19)
(intern "*SPEED_FINE*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*SPEED_FINE* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*SPEED_FINE* 20)
(intern "*GRIPPER_PWM_INC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*GRIPPER_PWM_INC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*GRIPPER_PWM_INC* 21)
(intern "*GRIPPER_PWM_DEC*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*GRIPPER_PWM_DEC* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*GRIPPER_PWM_DEC* 22)
(intern "*TORQUE_ON*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*TORQUE_ON* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*TORQUE_ON* 23)
(intern "*TORQUE_OFF*" (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(shadow '*TORQUE_OFF* (find-package "INTERBOTIX_XSARM_JOY::ARMJOY"))
(defconstant interbotix_xsarm_joy::ArmJoy::*TORQUE_OFF* 24)

(defun interbotix_xsarm_joy::ArmJoy-to-symbol (const)
  (cond
        ((= const 1) 'interbotix_xsarm_joy::ArmJoy::*EE_X_INC*)
        ((= const 2) 'interbotix_xsarm_joy::ArmJoy::*EE_X_DEC*)
        ((= const 3) 'interbotix_xsarm_joy::ArmJoy::*EE_Y_INC*)
        ((= const 4) 'interbotix_xsarm_joy::ArmJoy::*EE_Y_DEC*)
        ((= const 5) 'interbotix_xsarm_joy::ArmJoy::*EE_Z_INC*)
        ((= const 6) 'interbotix_xsarm_joy::ArmJoy::*EE_Z_DEC*)
        ((= const 7) 'interbotix_xsarm_joy::ArmJoy::*EE_ROLL_CCW*)
        ((= const 8) 'interbotix_xsarm_joy::ArmJoy::*EE_ROLL_CW*)
        ((= const 9) 'interbotix_xsarm_joy::ArmJoy::*EE_PITCH_UP*)
        ((= const 10) 'interbotix_xsarm_joy::ArmJoy::*EE_PITCH_DOWN*)
        ((= const 11) 'interbotix_xsarm_joy::ArmJoy::*WAIST_CCW*)
        ((= const 12) 'interbotix_xsarm_joy::ArmJoy::*WAIST_CW*)
        ((= const 13) 'interbotix_xsarm_joy::ArmJoy::*GRIPPER_OPEN*)
        ((= const 14) 'interbotix_xsarm_joy::ArmJoy::*GRIPPER_CLOSE*)
        ((= const 15) 'interbotix_xsarm_joy::ArmJoy::*HOME_POSE*)
        ((= const 16) 'interbotix_xsarm_joy::ArmJoy::*SLEEP_POSE*)
        ((= const 17) 'interbotix_xsarm_joy::ArmJoy::*SPEED_INC*)
        ((= const 18) 'interbotix_xsarm_joy::ArmJoy::*SPEED_DEC*)
        ((= const 19) 'interbotix_xsarm_joy::ArmJoy::*SPEED_COURSE*)
        ((= const 20) 'interbotix_xsarm_joy::ArmJoy::*SPEED_FINE*)
        ((= const 21) 'interbotix_xsarm_joy::ArmJoy::*GRIPPER_PWM_INC*)
        ((= const 22) 'interbotix_xsarm_joy::ArmJoy::*GRIPPER_PWM_DEC*)
        ((= const 23) 'interbotix_xsarm_joy::ArmJoy::*TORQUE_ON*)
        ((= const 24) 'interbotix_xsarm_joy::ArmJoy::*TORQUE_OFF*)
        (t nil)))

(defclass interbotix_xsarm_joy::ArmJoy
  :super ros::object
  :slots (_ee_x_cmd _ee_y_cmd _ee_z_cmd _ee_roll_cmd _ee_pitch_cmd _waist_cmd _gripper_cmd _pose_cmd _speed_cmd _speed_toggle_cmd _gripper_pwm_cmd _torque_cmd ))

(defmethod interbotix_xsarm_joy::ArmJoy
  (:init
   (&key
    ((:ee_x_cmd __ee_x_cmd) 0)
    ((:ee_y_cmd __ee_y_cmd) 0)
    ((:ee_z_cmd __ee_z_cmd) 0)
    ((:ee_roll_cmd __ee_roll_cmd) 0)
    ((:ee_pitch_cmd __ee_pitch_cmd) 0)
    ((:waist_cmd __waist_cmd) 0)
    ((:gripper_cmd __gripper_cmd) 0)
    ((:pose_cmd __pose_cmd) 0)
    ((:speed_cmd __speed_cmd) 0)
    ((:speed_toggle_cmd __speed_toggle_cmd) 0)
    ((:gripper_pwm_cmd __gripper_pwm_cmd) 0)
    ((:torque_cmd __torque_cmd) 0)
    )
   (send-super :init)
   (setq _ee_x_cmd (round __ee_x_cmd))
   (setq _ee_y_cmd (round __ee_y_cmd))
   (setq _ee_z_cmd (round __ee_z_cmd))
   (setq _ee_roll_cmd (round __ee_roll_cmd))
   (setq _ee_pitch_cmd (round __ee_pitch_cmd))
   (setq _waist_cmd (round __waist_cmd))
   (setq _gripper_cmd (round __gripper_cmd))
   (setq _pose_cmd (round __pose_cmd))
   (setq _speed_cmd (round __speed_cmd))
   (setq _speed_toggle_cmd (round __speed_toggle_cmd))
   (setq _gripper_pwm_cmd (round __gripper_pwm_cmd))
   (setq _torque_cmd (round __torque_cmd))
   self)
  (:ee_x_cmd
   (&optional __ee_x_cmd)
   (if __ee_x_cmd (setq _ee_x_cmd __ee_x_cmd)) _ee_x_cmd)
  (:ee_y_cmd
   (&optional __ee_y_cmd)
   (if __ee_y_cmd (setq _ee_y_cmd __ee_y_cmd)) _ee_y_cmd)
  (:ee_z_cmd
   (&optional __ee_z_cmd)
   (if __ee_z_cmd (setq _ee_z_cmd __ee_z_cmd)) _ee_z_cmd)
  (:ee_roll_cmd
   (&optional __ee_roll_cmd)
   (if __ee_roll_cmd (setq _ee_roll_cmd __ee_roll_cmd)) _ee_roll_cmd)
  (:ee_pitch_cmd
   (&optional __ee_pitch_cmd)
   (if __ee_pitch_cmd (setq _ee_pitch_cmd __ee_pitch_cmd)) _ee_pitch_cmd)
  (:waist_cmd
   (&optional __waist_cmd)
   (if __waist_cmd (setq _waist_cmd __waist_cmd)) _waist_cmd)
  (:gripper_cmd
   (&optional __gripper_cmd)
   (if __gripper_cmd (setq _gripper_cmd __gripper_cmd)) _gripper_cmd)
  (:pose_cmd
   (&optional __pose_cmd)
   (if __pose_cmd (setq _pose_cmd __pose_cmd)) _pose_cmd)
  (:speed_cmd
   (&optional __speed_cmd)
   (if __speed_cmd (setq _speed_cmd __speed_cmd)) _speed_cmd)
  (:speed_toggle_cmd
   (&optional __speed_toggle_cmd)
   (if __speed_toggle_cmd (setq _speed_toggle_cmd __speed_toggle_cmd)) _speed_toggle_cmd)
  (:gripper_pwm_cmd
   (&optional __gripper_pwm_cmd)
   (if __gripper_pwm_cmd (setq _gripper_pwm_cmd __gripper_pwm_cmd)) _gripper_pwm_cmd)
  (:torque_cmd
   (&optional __torque_cmd)
   (if __torque_cmd (setq _torque_cmd __torque_cmd)) _torque_cmd)
  (:serialization-length
   ()
   (+
    ;; int8 _ee_x_cmd
    1
    ;; int8 _ee_y_cmd
    1
    ;; int8 _ee_z_cmd
    1
    ;; int8 _ee_roll_cmd
    1
    ;; int8 _ee_pitch_cmd
    1
    ;; int8 _waist_cmd
    1
    ;; int8 _gripper_cmd
    1
    ;; int8 _pose_cmd
    1
    ;; int8 _speed_cmd
    1
    ;; int8 _speed_toggle_cmd
    1
    ;; int8 _gripper_pwm_cmd
    1
    ;; int8 _torque_cmd
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _ee_x_cmd
       (write-byte _ee_x_cmd s)
     ;; int8 _ee_y_cmd
       (write-byte _ee_y_cmd s)
     ;; int8 _ee_z_cmd
       (write-byte _ee_z_cmd s)
     ;; int8 _ee_roll_cmd
       (write-byte _ee_roll_cmd s)
     ;; int8 _ee_pitch_cmd
       (write-byte _ee_pitch_cmd s)
     ;; int8 _waist_cmd
       (write-byte _waist_cmd s)
     ;; int8 _gripper_cmd
       (write-byte _gripper_cmd s)
     ;; int8 _pose_cmd
       (write-byte _pose_cmd s)
     ;; int8 _speed_cmd
       (write-byte _speed_cmd s)
     ;; int8 _speed_toggle_cmd
       (write-byte _speed_toggle_cmd s)
     ;; int8 _gripper_pwm_cmd
       (write-byte _gripper_pwm_cmd s)
     ;; int8 _torque_cmd
       (write-byte _torque_cmd s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _ee_x_cmd
     (setq _ee_x_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _ee_x_cmd 127) (setq _ee_x_cmd (- _ee_x_cmd 256)))
   ;; int8 _ee_y_cmd
     (setq _ee_y_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _ee_y_cmd 127) (setq _ee_y_cmd (- _ee_y_cmd 256)))
   ;; int8 _ee_z_cmd
     (setq _ee_z_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _ee_z_cmd 127) (setq _ee_z_cmd (- _ee_z_cmd 256)))
   ;; int8 _ee_roll_cmd
     (setq _ee_roll_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _ee_roll_cmd 127) (setq _ee_roll_cmd (- _ee_roll_cmd 256)))
   ;; int8 _ee_pitch_cmd
     (setq _ee_pitch_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _ee_pitch_cmd 127) (setq _ee_pitch_cmd (- _ee_pitch_cmd 256)))
   ;; int8 _waist_cmd
     (setq _waist_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _waist_cmd 127) (setq _waist_cmd (- _waist_cmd 256)))
   ;; int8 _gripper_cmd
     (setq _gripper_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _gripper_cmd 127) (setq _gripper_cmd (- _gripper_cmd 256)))
   ;; int8 _pose_cmd
     (setq _pose_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _pose_cmd 127) (setq _pose_cmd (- _pose_cmd 256)))
   ;; int8 _speed_cmd
     (setq _speed_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _speed_cmd 127) (setq _speed_cmd (- _speed_cmd 256)))
   ;; int8 _speed_toggle_cmd
     (setq _speed_toggle_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _speed_toggle_cmd 127) (setq _speed_toggle_cmd (- _speed_toggle_cmd 256)))
   ;; int8 _gripper_pwm_cmd
     (setq _gripper_pwm_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _gripper_pwm_cmd 127) (setq _gripper_pwm_cmd (- _gripper_pwm_cmd 256)))
   ;; int8 _torque_cmd
     (setq _torque_cmd (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _torque_cmd 127) (setq _torque_cmd (- _torque_cmd 256)))
   ;;
   self)
  )

(setf (get interbotix_xsarm_joy::ArmJoy :md5sum-) "09eb0cc37cce12e41a0f984f2c2f53cd")
(setf (get interbotix_xsarm_joy::ArmJoy :datatype-) "interbotix_xsarm_joy/ArmJoy")
(setf (get interbotix_xsarm_joy::ArmJoy :definition-)
      "# Send commands from the xsarm_joy node to the xsarm_robot node

# enum values that define the joystick controls for the robot

#########################################################################################################

# Control the motion of the virtual 'ee_gripper_link' or end effector using the modern_robotics_ik engine
# Position Control
int8 EE_X_INC = 1
int8 EE_X_DEC = 2
int8 EE_Y_INC = 3
int8 EE_Y_DEC = 4
int8 EE_Z_INC = 5
int8 EE_Z_DEC = 6

# Orientation Control
int8 EE_ROLL_CCW = 7
int8 EE_ROLL_CW = 8
int8 EE_PITCH_UP = 9
int8 EE_PITCH_DOWN = 10

#########################################################################################################

# Control the motion of independent joints on the Arm or send predefined robot poses
# Waist Joint Control
int8 WAIST_CCW = 11
int8 WAIST_CW = 12

# Gripper Control
int8 GRIPPER_OPEN = 13
int8 GRIPPER_CLOSE = 14

# Pose Control
int8 HOME_POSE = 15
int8 SLEEP_POSE = 16

#########################################################################################################

# Customize configurations for the Interbotix Arm
# Inc/Dec Joint speed
int8 SPEED_INC = 17
int8 SPEED_DEC = 18

# Quickly toggle between a fast and slow speed setting
int8 SPEED_COURSE = 19
int8 SPEED_FINE = 20

# Inc/Dec Gripper pressure
int8 GRIPPER_PWM_INC = 21
int8 GRIPPER_PWM_DEC = 22

# Torque On/Off all servos
int8 TORQUE_ON = 23
int8 TORQUE_OFF = 24

#########################################################################################################

# Control the motion of the Interbotix Arm
int8 ee_x_cmd
int8 ee_y_cmd
int8 ee_z_cmd
int8 ee_roll_cmd
int8 ee_pitch_cmd

# Independent Joint/Pose Control
int8 waist_cmd
int8 gripper_cmd
int8 pose_cmd

# Misc. Configs
int8 speed_cmd
int8 speed_toggle_cmd
int8 gripper_pwm_cmd
int8 torque_cmd

")



(provide :interbotix_xsarm_joy/ArmJoy "09eb0cc37cce12e41a0f984f2c2f53cd")


