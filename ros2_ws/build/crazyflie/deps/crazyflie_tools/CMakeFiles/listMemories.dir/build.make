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
include deps/crazyflie_tools/CMakeFiles/listMemories.dir/depend.make

# Include the progress variables for this target.
include deps/crazyflie_tools/CMakeFiles/listMemories.dir/progress.make

# Include the compile flags for this target's objects.
include deps/crazyflie_tools/CMakeFiles/listMemories.dir/flags.make

deps/crazyflie_tools/CMakeFiles/listMemories.dir/src/listMemories.cpp.o: deps/crazyflie_tools/CMakeFiles/listMemories.dir/flags.make
deps/crazyflie_tools/CMakeFiles/listMemories.dir/src/listMemories.cpp.o: /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/deps/crazyflie_tools/src/listMemories.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tdeng23/ros2_ws/build/crazyflie/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object deps/crazyflie_tools/CMakeFiles/listMemories.dir/src/listMemories.cpp.o"
	cd /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/listMemories.dir/src/listMemories.cpp.o -c /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/deps/crazyflie_tools/src/listMemories.cpp

deps/crazyflie_tools/CMakeFiles/listMemories.dir/src/listMemories.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/listMemories.dir/src/listMemories.cpp.i"
	cd /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/deps/crazyflie_tools/src/listMemories.cpp > CMakeFiles/listMemories.dir/src/listMemories.cpp.i

deps/crazyflie_tools/CMakeFiles/listMemories.dir/src/listMemories.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/listMemories.dir/src/listMemories.cpp.s"
	cd /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/deps/crazyflie_tools/src/listMemories.cpp -o CMakeFiles/listMemories.dir/src/listMemories.cpp.s

# Object files for target listMemories
listMemories_OBJECTS = \
"CMakeFiles/listMemories.dir/src/listMemories.cpp.o"

# External object files for target listMemories
listMemories_EXTERNAL_OBJECTS =

deps/crazyflie_tools/listMemories: deps/crazyflie_tools/CMakeFiles/listMemories.dir/src/listMemories.cpp.o
deps/crazyflie_tools/listMemories: deps/crazyflie_tools/CMakeFiles/listMemories.dir/build.make
deps/crazyflie_tools/listMemories: deps/crazyflie_tools/crazyflie_cpp/libcrazyflie_cpp.a
deps/crazyflie_tools/listMemories: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.71.0
deps/crazyflie_tools/listMemories: deps/crazyflie_tools/crazyflie_cpp/crazyflie-link-cpp/libcrazyflieLinkCpp.a
deps/crazyflie_tools/listMemories: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
deps/crazyflie_tools/listMemories: deps/crazyflie_tools/CMakeFiles/listMemories.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tdeng23/ros2_ws/build/crazyflie/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable listMemories"
	cd /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/listMemories.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
deps/crazyflie_tools/CMakeFiles/listMemories.dir/build: deps/crazyflie_tools/listMemories

.PHONY : deps/crazyflie_tools/CMakeFiles/listMemories.dir/build

deps/crazyflie_tools/CMakeFiles/listMemories.dir/clean:
	cd /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools && $(CMAKE_COMMAND) -P CMakeFiles/listMemories.dir/cmake_clean.cmake
.PHONY : deps/crazyflie_tools/CMakeFiles/listMemories.dir/clean

deps/crazyflie_tools/CMakeFiles/listMemories.dir/depend:
	cd /home/tdeng23/ros2_ws/build/crazyflie && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie/deps/crazyflie_tools /home/tdeng23/ros2_ws/build/crazyflie /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools /home/tdeng23/ros2_ws/build/crazyflie/deps/crazyflie_tools/CMakeFiles/listMemories.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : deps/crazyflie_tools/CMakeFiles/listMemories.dir/depend

