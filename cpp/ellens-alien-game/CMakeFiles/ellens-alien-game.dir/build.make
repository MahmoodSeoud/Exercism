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
CMAKE_SOURCE_DIR = C:/Users/mahmo/Exercism/cpp/ellens-alien-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/mahmo/Exercism/cpp/ellens-alien-game

# Include any dependencies generated for this target.
include CMakeFiles/ellens-alien-game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ellens-alien-game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ellens-alien-game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ellens-alien-game.dir/flags.make

CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj: CMakeFiles/ellens-alien-game.dir/flags.make
CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj: ellens_alien_game_test.cpp
CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj: CMakeFiles/ellens-alien-game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/ellens-alien-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj -MF CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj.d -o CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj -c C:/Users/mahmo/Exercism/cpp/ellens-alien-game/ellens_alien_game_test.cpp

CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/ellens-alien-game/ellens_alien_game_test.cpp > CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.i

CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/ellens-alien-game/ellens_alien_game_test.cpp -o CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.s

CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj: CMakeFiles/ellens-alien-game.dir/flags.make
CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj: test/tests-main.cpp
CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj: CMakeFiles/ellens-alien-game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/mahmo/Exercism/cpp/ellens-alien-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj -MF CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj.d -o CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj -c C:/Users/mahmo/Exercism/cpp/ellens-alien-game/test/tests-main.cpp

CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/mahmo/Exercism/cpp/ellens-alien-game/test/tests-main.cpp > CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.i

CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/mahmo/Exercism/cpp/ellens-alien-game/test/tests-main.cpp -o CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.s

# Object files for target ellens-alien-game
ellens__alien__game_OBJECTS = \
"CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj" \
"CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj"

# External object files for target ellens-alien-game
ellens__alien__game_EXTERNAL_OBJECTS =

ellens-alien-game.exe: CMakeFiles/ellens-alien-game.dir/ellens_alien_game_test.cpp.obj
ellens-alien-game.exe: CMakeFiles/ellens-alien-game.dir/test/tests-main.cpp.obj
ellens-alien-game.exe: CMakeFiles/ellens-alien-game.dir/build.make
ellens-alien-game.exe: CMakeFiles/ellens-alien-game.dir/linkLibs.rsp
ellens-alien-game.exe: CMakeFiles/ellens-alien-game.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/mahmo/Exercism/cpp/ellens-alien-game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ellens-alien-game.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/ellens-alien-game.dir/objects.a
	C:/MinGW/bin/ar.exe qc CMakeFiles/ellens-alien-game.dir/objects.a @CMakeFiles/ellens-alien-game.dir/objects1.rsp
	C:/MinGW/bin/c++.exe -g -Wl,--whole-archive CMakeFiles/ellens-alien-game.dir/objects.a -Wl,--no-whole-archive -o ellens-alien-game.exe -Wl,--out-implib,libellens-alien-game.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/ellens-alien-game.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/ellens-alien-game.dir/build: ellens-alien-game.exe
.PHONY : CMakeFiles/ellens-alien-game.dir/build

CMakeFiles/ellens-alien-game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ellens-alien-game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ellens-alien-game.dir/clean

CMakeFiles/ellens-alien-game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/mahmo/Exercism/cpp/ellens-alien-game C:/Users/mahmo/Exercism/cpp/ellens-alien-game C:/Users/mahmo/Exercism/cpp/ellens-alien-game C:/Users/mahmo/Exercism/cpp/ellens-alien-game C:/Users/mahmo/Exercism/cpp/ellens-alien-game/CMakeFiles/ellens-alien-game.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ellens-alien-game.dir/depend
