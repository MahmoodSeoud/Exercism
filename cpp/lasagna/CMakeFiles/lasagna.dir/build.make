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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mahmood/Exercism/cpp/lasagna

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mahmood/Exercism/cpp/lasagna

# Include any dependencies generated for this target.
include CMakeFiles/lasagna.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lasagna.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lasagna.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lasagna.dir/flags.make

CMakeFiles/lasagna.dir/lasagna_test.cpp.o: CMakeFiles/lasagna.dir/flags.make
CMakeFiles/lasagna.dir/lasagna_test.cpp.o: lasagna_test.cpp
CMakeFiles/lasagna.dir/lasagna_test.cpp.o: CMakeFiles/lasagna.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mahmood/Exercism/cpp/lasagna/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lasagna.dir/lasagna_test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lasagna.dir/lasagna_test.cpp.o -MF CMakeFiles/lasagna.dir/lasagna_test.cpp.o.d -o CMakeFiles/lasagna.dir/lasagna_test.cpp.o -c /Users/mahmood/Exercism/cpp/lasagna/lasagna_test.cpp

CMakeFiles/lasagna.dir/lasagna_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lasagna.dir/lasagna_test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mahmood/Exercism/cpp/lasagna/lasagna_test.cpp > CMakeFiles/lasagna.dir/lasagna_test.cpp.i

CMakeFiles/lasagna.dir/lasagna_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lasagna.dir/lasagna_test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mahmood/Exercism/cpp/lasagna/lasagna_test.cpp -o CMakeFiles/lasagna.dir/lasagna_test.cpp.s

CMakeFiles/lasagna.dir/test/tests-main.cpp.o: CMakeFiles/lasagna.dir/flags.make
CMakeFiles/lasagna.dir/test/tests-main.cpp.o: test/tests-main.cpp
CMakeFiles/lasagna.dir/test/tests-main.cpp.o: CMakeFiles/lasagna.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mahmood/Exercism/cpp/lasagna/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lasagna.dir/test/tests-main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lasagna.dir/test/tests-main.cpp.o -MF CMakeFiles/lasagna.dir/test/tests-main.cpp.o.d -o CMakeFiles/lasagna.dir/test/tests-main.cpp.o -c /Users/mahmood/Exercism/cpp/lasagna/test/tests-main.cpp

CMakeFiles/lasagna.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lasagna.dir/test/tests-main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mahmood/Exercism/cpp/lasagna/test/tests-main.cpp > CMakeFiles/lasagna.dir/test/tests-main.cpp.i

CMakeFiles/lasagna.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lasagna.dir/test/tests-main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mahmood/Exercism/cpp/lasagna/test/tests-main.cpp -o CMakeFiles/lasagna.dir/test/tests-main.cpp.s

# Object files for target lasagna
lasagna_OBJECTS = \
"CMakeFiles/lasagna.dir/lasagna_test.cpp.o" \
"CMakeFiles/lasagna.dir/test/tests-main.cpp.o"

# External object files for target lasagna
lasagna_EXTERNAL_OBJECTS =

lasagna: CMakeFiles/lasagna.dir/lasagna_test.cpp.o
lasagna: CMakeFiles/lasagna.dir/test/tests-main.cpp.o
lasagna: CMakeFiles/lasagna.dir/build.make
lasagna: CMakeFiles/lasagna.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/mahmood/Exercism/cpp/lasagna/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lasagna"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lasagna.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lasagna.dir/build: lasagna
.PHONY : CMakeFiles/lasagna.dir/build

CMakeFiles/lasagna.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lasagna.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lasagna.dir/clean

CMakeFiles/lasagna.dir/depend:
	cd /Users/mahmood/Exercism/cpp/lasagna && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mahmood/Exercism/cpp/lasagna /Users/mahmood/Exercism/cpp/lasagna /Users/mahmood/Exercism/cpp/lasagna /Users/mahmood/Exercism/cpp/lasagna /Users/mahmood/Exercism/cpp/lasagna/CMakeFiles/lasagna.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lasagna.dir/depend
