# Install script for directory: /home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tdeng23/ros2_ws/src/crazyswarm2/install/crazyflie_interfaces")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/crazyflie_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crazyflie_interfaces" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_c/crazyflie_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/opt/ros/galactic/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crazyflie_interfaces" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_typesupport_fastrtps_c/crazyflie_interfaces/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/opt/ros/galactic/lib:/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crazyflie_interfaces" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_typesupport_fastrtps_cpp/crazyflie_interfaces/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crazyflie_interfaces" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_typesupport_introspection_c/crazyflie_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces:/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so"
         OLD_RPATH "/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crazyflie_interfaces" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_cpp/crazyflie_interfaces/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crazyflie_interfaces" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_typesupport_introspection_cpp/crazyflie_interfaces/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/libcrazyflie_interfaces__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/tdeng23/ros2_ws/src/crazyswarm2/install/crazyflie_interfaces/lib/python3.8/site-packages/crazyflie_interfaces/__init__.py"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/msg" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/msg/" REGEX "/[^/]*\\.py$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/srv" TYPE DIRECTORY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/srv/" REGEX "/[^/]*\\.py$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces:/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces:/opt/ros/galactic/lib:/opt/ros/galactic/share/builtin_interfaces/cmake/../../../lib:/opt/ros/galactic/share/geometry_msgs/cmake/../../../lib:/opt/ros/galactic/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces:/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces:/opt/ros/galactic/lib:/opt/ros/galactic/share/builtin_interfaces/cmake/../../../lib:/opt/ros/galactic/share/geometry_msgs/cmake/../../../lib:/opt/ros/galactic/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces:/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces:/opt/ros/galactic/lib:/opt/ros/galactic/share/builtin_interfaces/cmake/../../../lib:/opt/ros/galactic/share/geometry_msgs/cmake/../../../lib:/opt/ros/galactic/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/crazyflie_interfaces/crazyflie_interfaces_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_generator_py/crazyflie_interfaces/libcrazyflie_interfaces__python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so"
         OLD_RPATH "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces:/opt/ros/galactic/share/builtin_interfaces/cmake/../../../lib:/opt/ros/galactic/share/geometry_msgs/cmake/../../../lib:/opt/ros/galactic/share/std_msgs/cmake/../../../lib:/opt/ros/galactic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrazyflie_interfaces__python.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/FullState.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/LogDataGeneric.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/Hover.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/LogBlock.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/Position.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/TrajectoryPolynomialPiece.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/msg/VelocityWorld.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/GoTo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/Land.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/NotifySetpointsStop.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/SetGroupMask.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/StartTrajectory.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/Stop.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/Takeoff.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/UpdateParams.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/UploadTrajectory.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/RemoveLogging.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_adapter/crazyflie_interfaces/srv/AddLogging.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/FullState.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/LogDataGeneric.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/Hover.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/LogBlock.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/Position.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/TrajectoryPolynomialPiece.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/msg" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/msg/VelocityWorld.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/GoTo.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/GoTo_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/GoTo_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/Land.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/Land_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/Land_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/NotifySetpointsStop.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/NotifySetpointsStop_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/NotifySetpointsStop_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/SetGroupMask.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/SetGroupMask_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/SetGroupMask_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/StartTrajectory.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/StartTrajectory_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/StartTrajectory_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/Stop.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/Stop_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/Stop_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/Takeoff.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/Takeoff_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/Takeoff_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/UpdateParams.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/UpdateParams_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/UpdateParams_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/UploadTrajectory.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/UploadTrajectory_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/UploadTrajectory_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/RemoveLogging.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/RemoveLogging_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/RemoveLogging_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/srv/AddLogging.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/AddLogging_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/srv" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/srv/AddLogging_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/crazyflie_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/crazyflie_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/environment" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/crazyflie_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cExport.cmake"
         "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cExport.cmake"
         "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cExport.cmake"
         "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cppExport.cmake"
         "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cppExport.cmake"
         "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake/crazyflie_interfaces__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/CMakeFiles/Export/32554539d7a2160f7ec6af1faf173bc9/crazyflie_interfaces__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces/cmake" TYPE FILE FILES
    "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_core/crazyflie_interfacesConfig.cmake"
    "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/ament_cmake_core/crazyflie_interfacesConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crazyflie_interfaces" TYPE FILE FILES "/home/tdeng23/ros2_ws/src/crazyswarm2/crazyflie_interfaces/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/crazyflie_interfaces__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/tdeng23/ros2_ws/src/crazyswarm2/build/crazyflie_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
