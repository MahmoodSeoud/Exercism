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
CMAKE_SOURCE_DIR = C:/Users/mahmo/Exercism/cpp/pop-count

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/mahmo/Exercism/cpp/pop-count

# Include any dependencies generated for this target.
include CMakeFiles/pop-count.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pop-count.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pop-count.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pop-count.dir/flags.make

CMakeFiles/pop-count.dir/pop_count_test.cpp.obj: CMakeFiles/pop-count.dir/flags.make
CMakeFiles/pop-count.dir/pop_count_test.cpp.obj: pop_count_test.cpp
CMakeFiles/pop-count.dir/pop_count_test.cpp.obj: CMakeFiles/pop-count.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/pop-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pop-count.dir/pop_count_test.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pop-count.dir/pop_count_test.cpp.obj -MF CMakeFiles/pop-count.dir/pop_count_test.cpp.obj.d -o CMakeFiles/pop-count.dir/pop_count_test.cpp.obj -c C:/Users/mahmo/Exercism/cpp/pop-count/pop_count_test.cpp

CMakeFiles/pop-count.dir/pop_count_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pop-count.dir/pop_count_test.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/pop-count/pop_count_test.cpp > CMakeFiles/pop-count.dir/pop_count_test.cpp.i

CMakeFiles/pop-count.dir/pop_count_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pop-count.dir/pop_count_test.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/pop-count/pop_count_test.cpp -o CMakeFiles/pop-count.dir/pop_count_test.cpp.s

CMakeFiles/pop-count.dir/pop_count.cpp.obj: CMakeFiles/pop-count.dir/flags.make
CMakeFiles/pop-count.dir/pop_count.cpp.obj: pop_count.cpp
CMakeFiles/pop-count.dir/pop_count.cpp.obj: CMakeFiles/pop-count.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/pop-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pop-count.dir/pop_count.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pop-count.dir/pop_count.cpp.obj -MF CMakeFiles/pop-count.dir/pop_count.cpp.obj.d -o CMakeFiles/pop-count.dir/pop_count.cpp.obj -c C:/Users/mahmo/Exercism/cpp/pop-count/pop_count.cpp

CMakeFiles/pop-count.dir/pop_count.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pop-count.dir/pop_count.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/pop-count/pop_count.cpp > CMakeFiles/pop-count.dir/pop_count.cpp.i

CMakeFiles/pop-count.dir/pop_count.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pop-count.dir/pop_count.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/pop-count/pop_count.cpp -o CMakeFiles/pop-count.dir/pop_count.cpp.s

CMakeFiles/pop-count.dir/test/tests-main.cpp.obj: CMakeFiles/pop-count.dir/flags.make
CMakeFiles/pop-count.dir/test/tests-main.cpp.obj: test/tests-main.cpp
CMakeFiles/pop-count.dir/test/tests-main.cpp.obj: CMakeFiles/pop-count.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/pop-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/pop-count.dir/test/tests-main.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pop-count.dir/test/tests-main.cpp.obj -MF CMakeFiles/pop-count.dir/test/tests-main.cpp.obj.d -o CMakeFiles/pop-count.dir/test/tests-main.cpp.obj -c C:/Users/mahmo/Exercism/cpp/pop-count/test/tests-main.cpp

CMakeFiles/pop-count.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pop-count.dir/test/tests-main.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/pop-count/test/tests-main.cpp > CMakeFiles/pop-count.dir/test/tests-main.cpp.i

CMakeFiles/pop-count.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pop-count.dir/test/tests-main.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/pop-count/test/tests-main.cpp -o CMakeFiles/pop-count.dir/test/tests-main.cpp.s

# Object files for target pop-count
pop__count_OBJECTS = \
"CMakeFiles/pop-count.dir/pop_count_test.cpp.obj" \
"CMakeFiles/pop-count.dir/pop_count.cpp.obj" \
"CMakeFiles/pop-count.dir/test/tests-main.cpp.obj"

# External object files for target pop-count
pop__count_EXTERNAL_OBJECTS =

pop-count.exe: CMakeFiles/pop-count.dir/pop_count_test.cpp.obj
pop-count.exe: CMakeFiles/pop-count.dir/pop_count.cpp.obj
pop-count.exe: CMakeFiles/pop-count.dir/test/tests-main.cpp.obj
pop-count.exe: CMakeFiles/pop-count.dir/build.make
pop-count.exe: CMakeFiles/pop-count.dir/linkLibs.rsp
pop-count.exe: CMakeFiles/pop-count.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/mahmo/Exercism/cpp/pop-count/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable pop-count.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/pop-count.dir/objects.a
	C:/MinGW/bin/ar.exe qc CMakeFiles/pop-count.dir/objects.a @CMakeFiles/pop-count.dir/objects1.rsp
	C:/MinGW/bin/c++.exe -g -Wl,--whole-archive CMakeFiles/pop-count.dir/objects.a -Wl,--no-whole-archive -o pop-count.exe -Wl,--out-implib,libpop-count.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/pop-count.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/pop-count.dir/build: pop-count.exe
.PHONY : CMakeFiles/pop-count.dir/build

CMakeFiles/pop-count.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pop-count.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pop-count.dir/clean

CMakeFiles/pop-count.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/mahmo/Exercism/cpp/pop-count C:/Users/mahmo/Exercism/cpp/pop-count C:/Users/mahmo/Exercism/cpp/pop-count C:/Users/mahmo/Exercism/cpp/pop-count C:/Users/mahmo/Exercism/cpp/pop-count/CMakeFiles/pop-count.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/pop-count.dir/depend
