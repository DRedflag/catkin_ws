execute_process(COMMAND "/home/redflag/catkin_ws/build/trossen/interbotix_ros_toolboxes/interbotix_ux_toolbox/interbotix_ux_modules/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/redflag/catkin_ws/build/trossen/interbotix_ros_toolboxes/interbotix_ux_toolbox/interbotix_ux_modules/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
