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
CMAKE_SOURCE_DIR = /home/shw/Desktop/unita_erp_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shw/Desktop/unita_erp_ws/build

# Utility rule file for run_tests_velodyne_pointcloud.

# Include the progress variables for this target.
include sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/progress.make

run_tests_velodyne_pointcloud: sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/build.make

.PHONY : run_tests_velodyne_pointcloud

# Rule to build all files generated by this target.
sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/build: run_tests_velodyne_pointcloud

.PHONY : sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/build

sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/clean:
	cd /home/shw/Desktop/unita_erp_ws/build/sensors/velodyne/velodyne_pointcloud/tests && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_velodyne_pointcloud.dir/cmake_clean.cmake
.PHONY : sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/clean

sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/depend:
	cd /home/shw/Desktop/unita_erp_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shw/Desktop/unita_erp_ws/src /home/shw/Desktop/unita_erp_ws/src/sensors/velodyne/velodyne_pointcloud/tests /home/shw/Desktop/unita_erp_ws/build /home/shw/Desktop/unita_erp_ws/build/sensors/velodyne/velodyne_pointcloud/tests /home/shw/Desktop/unita_erp_ws/build/sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sensors/velodyne/velodyne_pointcloud/tests/CMakeFiles/run_tests_velodyne_pointcloud.dir/depend

