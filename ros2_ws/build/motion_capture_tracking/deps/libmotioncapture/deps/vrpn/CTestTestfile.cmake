# CMake generated Testfile for 
# Source directory: /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn
# Build directory: /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(vrpn_cppcheck_test "/usr/bin/cppcheck" "--template" "gcc" "--enable=unusedFunction" "--enable=style" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Analog.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Analog_Output.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Assert.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Auxiliary_Logger.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_BaseClass.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Button.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Connection.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Dial.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_EndpointContainer.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_FileConnection.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_FileController.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_ForceDevice.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Forwarder.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_ForwarderController.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_FunctionGenerator.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Imager.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_LamportClock.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Mutex.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Poser.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_RedundantTransmission.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Serial.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_SerialPort.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Shared.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_SharedObject.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Sound.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Text.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Thread.C" "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/vrpn_Tracker.C")
set_tests_properties(vrpn_cppcheck_test PROPERTIES  FAIL_REGULAR_EXPRESSION " error: " _BACKTRACE_TRIPLES "/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/cmake/CppcheckTargets.cmake;200;add_test;/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/CMakeLists.txt;1381;add_cppcheck;/home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/CMakeLists.txt;0;")
subdirs("quat")
subdirs("submodules")
subdirs("client_src")
subdirs("python_vrpn")
subdirs("python")
subdirs("java_vrpn")