# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/tdeng23/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/tdeng23/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tdeng23/ros2_ws/build/motion_capture_tracking

# Utility rule file for ExperimentalStart.

# Include any custom commands dependencies for this target.
include deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/compiler_depend.make

# Include the progress variables for this target.
include deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/progress.make

deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart:
	cd /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn && /home/tdeng23/.local/lib/python3.8/site-packages/cmake/data/bin/ctest -D ExperimentalStart

ExperimentalStart: deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart
ExperimentalStart: deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/build.make
.PHONY : ExperimentalStart

# Rule to build all files generated by this target.
deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/build: ExperimentalStart
.PHONY : deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/build

deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/clean:
	cd /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn && $(CMAKE_COMMAND) -P CMakeFiles/ExperimentalStart.dir/cmake_clean.cmake
.PHONY : deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/clean

deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/depend:
	cd /home/tdeng23/ros2_ws/build/motion_capture_tracking && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking /home/tdeng23/ros2_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/vrpn /home/tdeng23/ros2_ws/build/motion_capture_tracking /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn /home/tdeng23/ros2_ws/build/motion_capture_tracking/deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : deps/libmotioncapture/deps/vrpn/CMakeFiles/ExperimentalStart.dir/depend

