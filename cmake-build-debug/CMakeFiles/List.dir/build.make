# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/pawel/Pobrane/clion-2017.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/pawel/Pobrane/clion-2017.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pawel/CLionProjects/List

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pawel/CLionProjects/List/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/List.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/List.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/List.dir/flags.make

CMakeFiles/List.dir/main.cpp.o: CMakeFiles/List.dir/flags.make
CMakeFiles/List.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pawel/CLionProjects/List/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/List.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/List.dir/main.cpp.o -c /home/pawel/CLionProjects/List/main.cpp

CMakeFiles/List.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/List.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pawel/CLionProjects/List/main.cpp > CMakeFiles/List.dir/main.cpp.i

CMakeFiles/List.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/List.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pawel/CLionProjects/List/main.cpp -o CMakeFiles/List.dir/main.cpp.s

CMakeFiles/List.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/List.dir/main.cpp.o.requires

CMakeFiles/List.dir/main.cpp.o.provides: CMakeFiles/List.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/List.dir/build.make CMakeFiles/List.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/List.dir/main.cpp.o.provides

CMakeFiles/List.dir/main.cpp.o.provides.build: CMakeFiles/List.dir/main.cpp.o


CMakeFiles/List.dir/Node.cpp.o: CMakeFiles/List.dir/flags.make
CMakeFiles/List.dir/Node.cpp.o: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pawel/CLionProjects/List/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/List.dir/Node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/List.dir/Node.cpp.o -c /home/pawel/CLionProjects/List/Node.cpp

CMakeFiles/List.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/List.dir/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pawel/CLionProjects/List/Node.cpp > CMakeFiles/List.dir/Node.cpp.i

CMakeFiles/List.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/List.dir/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pawel/CLionProjects/List/Node.cpp -o CMakeFiles/List.dir/Node.cpp.s

CMakeFiles/List.dir/Node.cpp.o.requires:

.PHONY : CMakeFiles/List.dir/Node.cpp.o.requires

CMakeFiles/List.dir/Node.cpp.o.provides: CMakeFiles/List.dir/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/List.dir/build.make CMakeFiles/List.dir/Node.cpp.o.provides.build
.PHONY : CMakeFiles/List.dir/Node.cpp.o.provides

CMakeFiles/List.dir/Node.cpp.o.provides.build: CMakeFiles/List.dir/Node.cpp.o


CMakeFiles/List.dir/List.cpp.o: CMakeFiles/List.dir/flags.make
CMakeFiles/List.dir/List.cpp.o: ../List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pawel/CLionProjects/List/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/List.dir/List.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/List.dir/List.cpp.o -c /home/pawel/CLionProjects/List/List.cpp

CMakeFiles/List.dir/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/List.dir/List.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pawel/CLionProjects/List/List.cpp > CMakeFiles/List.dir/List.cpp.i

CMakeFiles/List.dir/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/List.dir/List.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pawel/CLionProjects/List/List.cpp -o CMakeFiles/List.dir/List.cpp.s

CMakeFiles/List.dir/List.cpp.o.requires:

.PHONY : CMakeFiles/List.dir/List.cpp.o.requires

CMakeFiles/List.dir/List.cpp.o.provides: CMakeFiles/List.dir/List.cpp.o.requires
	$(MAKE) -f CMakeFiles/List.dir/build.make CMakeFiles/List.dir/List.cpp.o.provides.build
.PHONY : CMakeFiles/List.dir/List.cpp.o.provides

CMakeFiles/List.dir/List.cpp.o.provides.build: CMakeFiles/List.dir/List.cpp.o


CMakeFiles/List.dir/functions.cpp.o: CMakeFiles/List.dir/flags.make
CMakeFiles/List.dir/functions.cpp.o: ../functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pawel/CLionProjects/List/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/List.dir/functions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/List.dir/functions.cpp.o -c /home/pawel/CLionProjects/List/functions.cpp

CMakeFiles/List.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/List.dir/functions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pawel/CLionProjects/List/functions.cpp > CMakeFiles/List.dir/functions.cpp.i

CMakeFiles/List.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/List.dir/functions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pawel/CLionProjects/List/functions.cpp -o CMakeFiles/List.dir/functions.cpp.s

CMakeFiles/List.dir/functions.cpp.o.requires:

.PHONY : CMakeFiles/List.dir/functions.cpp.o.requires

CMakeFiles/List.dir/functions.cpp.o.provides: CMakeFiles/List.dir/functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/List.dir/build.make CMakeFiles/List.dir/functions.cpp.o.provides.build
.PHONY : CMakeFiles/List.dir/functions.cpp.o.provides

CMakeFiles/List.dir/functions.cpp.o.provides.build: CMakeFiles/List.dir/functions.cpp.o


# Object files for target List
List_OBJECTS = \
"CMakeFiles/List.dir/main.cpp.o" \
"CMakeFiles/List.dir/Node.cpp.o" \
"CMakeFiles/List.dir/List.cpp.o" \
"CMakeFiles/List.dir/functions.cpp.o"

# External object files for target List
List_EXTERNAL_OBJECTS =

List: CMakeFiles/List.dir/main.cpp.o
List: CMakeFiles/List.dir/Node.cpp.o
List: CMakeFiles/List.dir/List.cpp.o
List: CMakeFiles/List.dir/functions.cpp.o
List: CMakeFiles/List.dir/build.make
List: CMakeFiles/List.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pawel/CLionProjects/List/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable List"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/List.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/List.dir/build: List

.PHONY : CMakeFiles/List.dir/build

CMakeFiles/List.dir/requires: CMakeFiles/List.dir/main.cpp.o.requires
CMakeFiles/List.dir/requires: CMakeFiles/List.dir/Node.cpp.o.requires
CMakeFiles/List.dir/requires: CMakeFiles/List.dir/List.cpp.o.requires
CMakeFiles/List.dir/requires: CMakeFiles/List.dir/functions.cpp.o.requires

.PHONY : CMakeFiles/List.dir/requires

CMakeFiles/List.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/List.dir/cmake_clean.cmake
.PHONY : CMakeFiles/List.dir/clean

CMakeFiles/List.dir/depend:
	cd /home/pawel/CLionProjects/List/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pawel/CLionProjects/List /home/pawel/CLionProjects/List /home/pawel/CLionProjects/List/cmake-build-debug /home/pawel/CLionProjects/List/cmake-build-debug /home/pawel/CLionProjects/List/cmake-build-debug/CMakeFiles/List.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/List.dir/depend

