# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/mahmo/Exercism/cpp/making-the-grade

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/mahmo/Exercism/cpp/making-the-grade

# Include any dependencies generated for this target.
include CMakeFiles/making-the-grade.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/making-the-grade.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/making-the-grade.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/making-the-grade.dir/flags.make

CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj: CMakeFiles/making-the-grade.dir/flags.make
CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj: making_the_grade_test.cpp
CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj: CMakeFiles/making-the-grade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/making-the-grade/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj -MF CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj.d -o CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj -c C:/Users/mahmo/Exercism/cpp/making-the-grade/making_the_grade_test.cpp

CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/making-the-grade/making_the_grade_test.cpp > CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.i

CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/making-the-grade/making_the_grade_test.cpp -o CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.s

CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj: CMakeFiles/making-the-grade.dir/flags.make
CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj: test/tests-main.cpp
CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj: CMakeFiles/making-the-grade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/making-the-grade/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj -MF CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj.d -o CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj -c C:/Users/mahmo/Exercism/cpp/making-the-grade/test/tests-main.cpp

CMakeFiles/making-the-grade.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/making-the-grade.dir/test/tests-main.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/making-the-grade/test/tests-main.cpp > CMakeFiles/making-the-grade.dir/test/tests-main.cpp.i

CMakeFiles/making-the-grade.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/making-the-grade.dir/test/tests-main.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/making-the-grade/test/tests-main.cpp -o CMakeFiles/making-the-grade.dir/test/tests-main.cpp.s

# Object files for target making-the-grade
making__the__grade_OBJECTS = \
"CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj" \
"CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj"

# External object files for target making-the-grade
making__the__grade_EXTERNAL_OBJECTS =

making-the-grade.exe: CMakeFiles/making-the-grade.dir/making_the_grade_test.cpp.obj
making-the-grade.exe: CMakeFiles/making-the-grade.dir/test/tests-main.cpp.obj
making-the-grade.exe: CMakeFiles/making-the-grade.dir/build.make
making-the-grade.exe: CMakeFiles/making-the-grade.dir/linkLibs.rsp
making-the-grade.exe: CMakeFiles/making-the-grade.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/mahmo/Exercism/cpp/making-the-grade/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable making-the-grade.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/making-the-grade.dir/objects.a
	C:/MinGW/bin/ar.exe qc CMakeFiles/making-the-grade.dir/objects.a @CMakeFiles/making-the-grade.dir/objects1.rsp
	C:/MinGW/bin/c++.exe -g -Wl,--whole-archive CMakeFiles/making-the-grade.dir/objects.a -Wl,--no-whole-archive -o making-the-grade.exe -Wl,--out-implib,libmaking-the-grade.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/making-the-grade.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/making-the-grade.dir/build: making-the-grade.exe
.PHONY : CMakeFiles/making-the-grade.dir/build

CMakeFiles/making-the-grade.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/making-the-grade.dir/cmake_clean.cmake
.PHONY : CMakeFiles/making-the-grade.dir/clean

CMakeFiles/making-the-grade.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/mahmo/Exercism/cpp/making-the-grade C:/Users/mahmo/Exercism/cpp/making-the-grade C:/Users/mahmo/Exercism/cpp/making-the-grade C:/Users/mahmo/Exercism/cpp/making-the-grade C:/Users/mahmo/Exercism/cpp/making-the-grade/CMakeFiles/making-the-grade.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/making-the-grade.dir/depend

