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
CMAKE_SOURCE_DIR = /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tdeng23/ros2_ws/build/motion_capture_tracking

# Utility rule file for NightlyMemCheck.

# Include the progress variables for this target.
include deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/progress.make

deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck:
	cd /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn && /usr/bin/ctest -D NightlyMemCheck

NightlyMemCheck: deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck
NightlyMemCheck: deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/build.make

.PHONY : NightlyMemCheck

# Rule to build all files generated by this target.
deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/build: NightlyMemCheck

.PHONY : deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/build

deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/clean:
	cd /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn && $(CMAKE_COMMAND) -P CMakeFiles/NightlyMemCheck.dir/cmake_clean.cmake
.PHONY : deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/clean

deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/depend:
	cd /home/tdeng23/ros2_ws/build/motion_capture_tracking && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn /home/tdeng23/ros2_ws/build/motion_capture_tracking /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : deps/libmotioncapture/deps/vrpn/CMakeFiles/NightlyMemCheck.dir/depend

