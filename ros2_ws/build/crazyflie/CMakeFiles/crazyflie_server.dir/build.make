# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tdeng23/ros2_ws/build/crazyflie

# Include any dependencies generated for this target.
include CMakeFiles/crazyflie_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/crazyflie_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/crazyflie_server.dir/flags.make

CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.o: CMakeFiles/crazyflie_server.dir/flags.make
CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.o: /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/src/crazyflie_server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tdeng23/ros2_ws/build/crazyflie/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.o -c /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/src/crazyflie_server.cpp

CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/src/crazyflie_server.cpp > CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.i

CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/src/crazyflie_server.cpp -o CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.s

# Object files for target crazyflie_server
crazyflie_server_OBJECTS = \
"CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.o"

# External object files for target crazyflie_server
crazyflie_server_EXTERNAL_OBJECTS =

crazyflie_server: CMakeFiles/crazyflie_server.dir/src/crazyflie_server.cpp.o
crazyflie_server: CMakeFiles/crazyflie_server.dir/build.make
crazyflie_server: deps/crazyflie_tools/crazyflie_cpp/libcrazyflie_cpp.a
crazyflie_server: /opt/ros/galactic/lib/libstatic_transform_broadcaster_node.so
crazyflie_server: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libstd_srvs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libstd_srvs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libstd_srvs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libstd_srvs__rosidl_typesupport_cpp.so
crazyflie_server: /home/tdeng23/ros2_ws/install/crazyflie_interfaces/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so
crazyflie_server: /home/tdeng23/ros2_ws/install/crazyflie_interfaces/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so
crazyflie_server: /home/tdeng23/ros2_ws/install/crazyflie_interfaces/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /home/tdeng23/ros2_ws/install/crazyflie_interfaces/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so
crazyflie_server: /home/tdeng23/ros2_ws/install/motion_capture_tracking_interfaces/lib/libmotion_capture_tracking_interfaces__rosidl_typesupport_introspection_c.so
crazyflie_server: /home/tdeng23/ros2_ws/install/motion_capture_tracking_interfaces/lib/libmotion_capture_tracking_interfaces__rosidl_typesupport_c.so
crazyflie_server: /home/tdeng23/ros2_ws/install/motion_capture_tracking_interfaces/lib/libmotion_capture_tracking_interfaces__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /home/tdeng23/ros2_ws/install/motion_capture_tracking_interfaces/lib/libmotion_capture_tracking_interfaces__rosidl_typesupport_cpp.so
crazyflie_server: deps/crazyflie_tools/crazyflie_cpp/crazyflie-link-cpp/libcrazyflieLinkCpp.a
crazyflie_server: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
crazyflie_server: /opt/ros/galactic/lib/libtf2_ros.so
crazyflie_server: /opt/ros/galactic/lib/libmessage_filters.so
crazyflie_server: /opt/ros/galactic/lib/librclcpp_action.so
crazyflie_server: /opt/ros/galactic/lib/librcl_action.so
crazyflie_server: /opt/ros/galactic/lib/libtf2.so
crazyflie_server: /opt/ros/galactic/lib/libtf2_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libtf2_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libtf2_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libtf2_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libtf2_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libaction_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libaction_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libaction_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libunique_identifier_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libcomponent_manager.so
crazyflie_server: /opt/ros/galactic/lib/librclcpp.so
crazyflie_server: /opt/ros/galactic/lib/liblibstatistics_collector.so
crazyflie_server: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librcl.so
crazyflie_server: /opt/ros/galactic/lib/librmw_implementation.so
crazyflie_server: /opt/ros/galactic/lib/librcl_logging_spdlog.so
crazyflie_server: /opt/ros/galactic/lib/librcl_logging_interface.so
crazyflie_server: /opt/ros/galactic/lib/librcl_yaml_param_parser.so
crazyflie_server: /opt/ros/galactic/lib/librmw.so
crazyflie_server: /opt/ros/galactic/lib/libyaml.so
crazyflie_server: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libtracetools.so
crazyflie_server: /opt/ros/galactic/lib/libament_index_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libclass_loader.so
crazyflie_server: /opt/ros/galactic/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0
crazyflie_server: /opt/ros/galactic/lib/libcomposition_interfaces__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libcomposition_interfaces__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libcomposition_interfaces__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libcomposition_interfaces__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libcomposition_interfaces__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/librcl_interfaces__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libsensor_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libstd_srvs__rosidl_generator_c.so
crazyflie_server: /home/tdeng23/ros2_ws/install/crazyflie_interfaces/lib/libcrazyflie_interfaces__rosidl_generator_c.so
crazyflie_server: /home/tdeng23/ros2_ws/install/motion_capture_tracking_interfaces/lib/libmotion_capture_tracking_interfaces__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libstd_msgs__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_generator_c.so
crazyflie_server: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librosidl_typesupport_introspection_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librosidl_typesupport_introspection_c.so
crazyflie_server: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librosidl_typesupport_cpp.so
crazyflie_server: /opt/ros/galactic/lib/librosidl_typesupport_c.so
crazyflie_server: /opt/ros/galactic/lib/librcpputils.so
crazyflie_server: /opt/ros/galactic/lib/librosidl_runtime_c.so
crazyflie_server: /opt/ros/galactic/lib/librcutils.so
crazyflie_server: CMakeFiles/crazyflie_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tdeng23/ros2_ws/build/crazyflie/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable crazyflie_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/crazyflie_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/crazyflie_server.dir/build: crazyflie_server

.PHONY : CMakeFiles/crazyflie_server.dir/build

CMakeFiles/crazyflie_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/crazyflie_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/crazyflie_server.dir/clean

CMakeFiles/crazyflie_server.dir/depend:
	cd /home/tdeng23/ros2_ws/build/crazyflie && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie /home/tdeng23/ros2_ws/build/crazyflie /home/tdeng23/ros2_ws/build/crazyflie /home/tdeng23/ros2_ws/build/crazyflie/CMakeFiles/crazyflie_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/crazyflie_server.dir/depend

