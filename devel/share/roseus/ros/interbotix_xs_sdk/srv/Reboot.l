;; Auto-generated. Do not edit!


(when (boundp 'interbotix_xs_sdk::Reboot)
  (if (not (find-package "INTERBOTIX_XS_SDK"))
    (make-package "INTERBOTIX_XS_SDK"))
  (shadow 'Reboot (find-package "INTERBOTIX_XS_SDK")))
(unless (find-package "INTERBOTIX_XS_SDK::REBOOT")
  (make-package "INTERBOTIX_XS_SDK::REBOOT"))
(unless (find-package "INTERBOTIX_XS_SDK::REBOOTREQUEST")
  (make-package "INTERBOTIX_XS_SDK::REBOOTREQUEST"))
(unless (find-package "INTERBOTIX_XS_SDK::REBOOTRESPONSE")
  (make-package "INTERBOTIX_XS_SDK::REBOOTRESPONSE"))

(in-package "ROS")





(defclass interbotix_xs_sdk::RebootRequest
  :super ros::object
  :slots (_cmd_type _name _enable _smart_reboot ))

(defmethod interbotix_xs_sdk::RebootRequest
  (:init
   (&key
    ((:cmd_type __cmd_type) "")
    ((:name __name) "")
    ((:enable __enable) nil)
    ((:smart_reboot __smart_reboot) nil)
    )
   (send-super :init)
   (setq _cmd_type (string __cmd_type))
   (setq _name (string __name))
   (setq _enable __enable)
   (setq _smart_reboot __smart_reboot)
   self)
  (:cmd_type
   (&optional __cmd_type)
   (if __cmd_type (setq _cmd_type __cmd_type)) _cmd_type)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:enable
   (&optional (__enable :null))
   (if (not (eq __enable :null)) (setq _enable __enable)) _enable)
  (:smart_reboot
   (&optional (__smart_reboot :null))
   (if (not (eq __smart_reboot :null)) (setq _smart_reboot __smart_reboot)) _smart_reboot)
  (:serialization-length
   ()
   (+
    ;; string _cmd_type
    4 (length _cmd_type)
    ;; string _name
    4 (length _name)
    ;; bool _enable
    1
    ;; bool _smart_reboot
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _cmd_type
       (write-long (length _cmd_type) s) (princ _cmd_type s)
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; bool _enable
       (if _enable (write-byte -1 s) (write-byte 0 s))
     ;; bool _smart_reboot
       (if _smart_reboot (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _cmd_type
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _cmd_type (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _enable
     (setq _enable (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _smart_reboot
     (setq _smart_reboot (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass interbotix_xs_sdk::RebootResponse
  :super ros::object
  :slots ())

(defmethod interbotix_xs_sdk::RebootResponse
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass interbotix_xs_sdk::Reboot
  :super ros::object
  :slots ())

(setf (get interbotix_xs_sdk::Reboot :md5sum-) "229067e7bfb48bf403b702d5f7f1ee93")
(setf (get interbotix_xs_sdk::Reboot :datatype-) "interbotix_xs_sdk/Reboot")
(setf (get interbotix_xs_sdk::Reboot :request) interbotix_xs_sdk::RebootRequest)
(setf (get interbotix_xs_sdk::Reboot :response) interbotix_xs_sdk::RebootResponse)

(defmethod interbotix_xs_sdk::RebootRequest
  (:response () (instance interbotix_xs_sdk::RebootResponse :init)))

(setf (get interbotix_xs_sdk::RebootRequest :md5sum-) "229067e7bfb48bf403b702d5f7f1ee93")
(setf (get interbotix_xs_sdk::RebootRequest :datatype-) "interbotix_xs_sdk/RebootRequest")
(setf (get interbotix_xs_sdk::RebootRequest :definition-)
      "# Reboot motors
#
# Note that if a dual-joint is selected, both motors will be rebooted. Also note
# that motors will NOT hold position during the reboot process. Additionally, only
# EEPROM registers will retain their values, but RAM registers will not. See details
# at https://emanual.robotis.com/docs/en/dxl/x/xm430-w350/#area-eeprom-ram

string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint
string name              # name of the group if commanding a joint group or joint if commanding a single joint
bool enable              # whether to torque the selected joints on after reboot
bool smart_reboot        # set to true to only reboot motors in a specified group that are in an error state
                         # (as opposed to a blanket reboot of all motors in said group)
---

")

(setf (get interbotix_xs_sdk::RebootResponse :md5sum-) "229067e7bfb48bf403b702d5f7f1ee93")
(setf (get interbotix_xs_sdk::RebootResponse :datatype-) "interbotix_xs_sdk/RebootResponse")
(setf (get interbotix_xs_sdk::RebootResponse :definition-)
      "# Reboot motors
#
# Note that if a dual-joint is selected, both motors will be rebooted. Also note
# that motors will NOT hold position during the reboot process. Additionally, only
# EEPROM registers will retain their values, but RAM registers will not. See details
# at https://emanual.robotis.com/docs/en/dxl/x/xm430-w350/#area-eeprom-ram

string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint
string name              # name of the group if commanding a joint group or joint if commanding a single joint
bool enable              # whether to torque the selected joints on after reboot
bool smart_reboot        # set to true to only reboot motors in a specified group that are in an error state
                         # (as opposed to a blanket reboot of all motors in said group)
---

")



(provide :interbotix_xs_sdk/Reboot "229067e7bfb48bf403b702d5f7f1ee93")


