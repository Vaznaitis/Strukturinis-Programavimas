# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/4th.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/4th.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/4th.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4th.dir/flags.make

CMakeFiles/4th.dir/main.cpp.obj: CMakeFiles/4th.dir/flags.make
CMakeFiles/4th.dir/main.cpp.obj: C:/Users/vazna/Desktop/Strukturinis-Programavimas/Funkcijos,\ void\ Rugsejo\ 26-27/4th/main.cpp
CMakeFiles/4th.dir/main.cpp.obj: CMakeFiles/4th.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4th.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/4th.dir/main.cpp.obj -MF CMakeFiles\4th.dir\main.cpp.obj.d -o CMakeFiles\4th.dir\main.cpp.obj -c "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\main.cpp"

CMakeFiles/4th.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/4th.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\main.cpp" > CMakeFiles\4th.dir\main.cpp.i

CMakeFiles/4th.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/4th.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\main.cpp" -o CMakeFiles\4th.dir\main.cpp.s

# Object files for target 4th
4th_OBJECTS = \
"CMakeFiles/4th.dir/main.cpp.obj"

# External object files for target 4th
4th_EXTERNAL_OBJECTS =

4th.exe: CMakeFiles/4th.dir/main.cpp.obj
4th.exe: CMakeFiles/4th.dir/build.make
4th.exe: CMakeFiles/4th.dir/linkLibs.rsp
4th.exe: CMakeFiles/4th.dir/objects1.rsp
4th.exe: CMakeFiles/4th.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4th.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\4th.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4th.dir/build: 4th.exe
.PHONY : CMakeFiles/4th.dir/build

CMakeFiles/4th.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\4th.dir\cmake_clean.cmake
.PHONY : CMakeFiles/4th.dir/clean

CMakeFiles/4th.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th" "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th" "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\cmake-build-debug" "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\cmake-build-debug" "C:\Users\vazna\Desktop\Strukturinis-Programavimas\Funkcijos, void Rugsejo 26-27\4th\cmake-build-debug\CMakeFiles\4th.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/4th.dir/depend

