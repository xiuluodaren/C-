# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C++Developer\workspace\part5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++Developer\workspace\part5\Build

# Include any dependencies generated for this target.
include CMakeFiles/Compile.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Compile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Compile.dir/flags.make

CMakeFiles/Compile.dir/equation.cpp.obj: CMakeFiles/Compile.dir/flags.make
CMakeFiles/Compile.dir/equation.cpp.obj: CMakeFiles/Compile.dir/includes_CXX.rsp
CMakeFiles/Compile.dir/equation.cpp.obj: ../equation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Developer\workspace\part5\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Compile.dir/equation.cpp.obj"
	g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Compile.dir\equation.cpp.obj -c D:\C++Developer\workspace\part5\equation.cpp

CMakeFiles/Compile.dir/equation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compile.dir/equation.cpp.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Developer\workspace\part5\equation.cpp > CMakeFiles\Compile.dir\equation.cpp.i

CMakeFiles/Compile.dir/equation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compile.dir/equation.cpp.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Developer\workspace\part5\equation.cpp -o CMakeFiles\Compile.dir\equation.cpp.s

CMakeFiles/Compile.dir/Find.cpp.obj: CMakeFiles/Compile.dir/flags.make
CMakeFiles/Compile.dir/Find.cpp.obj: CMakeFiles/Compile.dir/includes_CXX.rsp
CMakeFiles/Compile.dir/Find.cpp.obj: ../Find.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Developer\workspace\part5\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Compile.dir/Find.cpp.obj"
	g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Compile.dir\Find.cpp.obj -c D:\C++Developer\workspace\part5\Find.cpp

CMakeFiles/Compile.dir/Find.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Compile.dir/Find.cpp.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Developer\workspace\part5\Find.cpp > CMakeFiles\Compile.dir\Find.cpp.i

CMakeFiles/Compile.dir/Find.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Compile.dir/Find.cpp.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Developer\workspace\part5\Find.cpp -o CMakeFiles\Compile.dir\Find.cpp.s

# Object files for target Compile
Compile_OBJECTS = \
"CMakeFiles/Compile.dir/equation.cpp.obj" \
"CMakeFiles/Compile.dir/Find.cpp.obj"

# External object files for target Compile
Compile_EXTERNAL_OBJECTS =

../Bin/Compile.exe: CMakeFiles/Compile.dir/equation.cpp.obj
../Bin/Compile.exe: CMakeFiles/Compile.dir/Find.cpp.obj
../Bin/Compile.exe: CMakeFiles/Compile.dir/build.make
../Bin/Compile.exe: CMakeFiles/Compile.dir/linklibs.rsp
../Bin/Compile.exe: CMakeFiles/Compile.dir/objects1.rsp
../Bin/Compile.exe: CMakeFiles/Compile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++Developer\workspace\part5\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ..\Bin\Compile.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Compile.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Compile.dir/build: ../Bin/Compile.exe

.PHONY : CMakeFiles/Compile.dir/build

CMakeFiles/Compile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Compile.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Compile.dir/clean

CMakeFiles/Compile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++Developer\workspace\part5 D:\C++Developer\workspace\part5 D:\C++Developer\workspace\part5\Build D:\C++Developer\workspace\part5\Build D:\C++Developer\workspace\part5\Build\CMakeFiles\Compile.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Compile.dir/depend

