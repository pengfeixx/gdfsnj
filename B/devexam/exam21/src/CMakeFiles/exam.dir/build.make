# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/uos/Desktop/devexam/exam21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uos/Desktop/devexam/exam21

# Include any dependencies generated for this target.
include src/CMakeFiles/exam.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/exam.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/exam.dir/flags.make

src/ui_mainwindow.h: src/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_mainwindow.h"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/lib/qt5/bin/uic -o /home/uos/Desktop/devexam/exam21/src/ui_mainwindow.h /home/uos/Desktop/devexam/exam21/src/mainwindow.ui

src/CMakeFiles/exam.dir/mainwindow.cpp.o: src/CMakeFiles/exam.dir/flags.make
src/CMakeFiles/exam.dir/mainwindow.cpp.o: src/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/exam.dir/mainwindow.cpp.o"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam.dir/mainwindow.cpp.o -c /home/uos/Desktop/devexam/exam21/src/mainwindow.cpp

src/CMakeFiles/exam.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam.dir/mainwindow.cpp.i"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uos/Desktop/devexam/exam21/src/mainwindow.cpp > CMakeFiles/exam.dir/mainwindow.cpp.i

src/CMakeFiles/exam.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam.dir/mainwindow.cpp.s"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uos/Desktop/devexam/exam21/src/mainwindow.cpp -o CMakeFiles/exam.dir/mainwindow.cpp.s

src/CMakeFiles/exam.dir/autotest.cpp.o: src/CMakeFiles/exam.dir/flags.make
src/CMakeFiles/exam.dir/autotest.cpp.o: src/autotest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/exam.dir/autotest.cpp.o"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam.dir/autotest.cpp.o -c /home/uos/Desktop/devexam/exam21/src/autotest.cpp

src/CMakeFiles/exam.dir/autotest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam.dir/autotest.cpp.i"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uos/Desktop/devexam/exam21/src/autotest.cpp > CMakeFiles/exam.dir/autotest.cpp.i

src/CMakeFiles/exam.dir/autotest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam.dir/autotest.cpp.s"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uos/Desktop/devexam/exam21/src/autotest.cpp -o CMakeFiles/exam.dir/autotest.cpp.s

src/CMakeFiles/exam.dir/todoview.cpp.o: src/CMakeFiles/exam.dir/flags.make
src/CMakeFiles/exam.dir/todoview.cpp.o: src/todoview.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/exam.dir/todoview.cpp.o"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam.dir/todoview.cpp.o -c /home/uos/Desktop/devexam/exam21/src/todoview.cpp

src/CMakeFiles/exam.dir/todoview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam.dir/todoview.cpp.i"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uos/Desktop/devexam/exam21/src/todoview.cpp > CMakeFiles/exam.dir/todoview.cpp.i

src/CMakeFiles/exam.dir/todoview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam.dir/todoview.cpp.s"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uos/Desktop/devexam/exam21/src/todoview.cpp -o CMakeFiles/exam.dir/todoview.cpp.s

src/CMakeFiles/exam.dir/todomodel.cpp.o: src/CMakeFiles/exam.dir/flags.make
src/CMakeFiles/exam.dir/todomodel.cpp.o: src/todomodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/exam.dir/todomodel.cpp.o"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam.dir/todomodel.cpp.o -c /home/uos/Desktop/devexam/exam21/src/todomodel.cpp

src/CMakeFiles/exam.dir/todomodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam.dir/todomodel.cpp.i"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uos/Desktop/devexam/exam21/src/todomodel.cpp > CMakeFiles/exam.dir/todomodel.cpp.i

src/CMakeFiles/exam.dir/todomodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam.dir/todomodel.cpp.s"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uos/Desktop/devexam/exam21/src/todomodel.cpp -o CMakeFiles/exam.dir/todomodel.cpp.s

src/CMakeFiles/exam.dir/main.cpp.o: src/CMakeFiles/exam.dir/flags.make
src/CMakeFiles/exam.dir/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/exam.dir/main.cpp.o"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam.dir/main.cpp.o -c /home/uos/Desktop/devexam/exam21/src/main.cpp

src/CMakeFiles/exam.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam.dir/main.cpp.i"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uos/Desktop/devexam/exam21/src/main.cpp > CMakeFiles/exam.dir/main.cpp.i

src/CMakeFiles/exam.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam.dir/main.cpp.s"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uos/Desktop/devexam/exam21/src/main.cpp -o CMakeFiles/exam.dir/main.cpp.s

src/CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.o: src/CMakeFiles/exam.dir/flags.make
src/CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.o: src/exam_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.o"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.o -c /home/uos/Desktop/devexam/exam21/src/exam_autogen/mocs_compilation.cpp

src/CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.i"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uos/Desktop/devexam/exam21/src/exam_autogen/mocs_compilation.cpp > CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.i

src/CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.s"
	cd /home/uos/Desktop/devexam/exam21/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uos/Desktop/devexam/exam21/src/exam_autogen/mocs_compilation.cpp -o CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.s

# Object files for target exam
exam_OBJECTS = \
"CMakeFiles/exam.dir/mainwindow.cpp.o" \
"CMakeFiles/exam.dir/autotest.cpp.o" \
"CMakeFiles/exam.dir/todoview.cpp.o" \
"CMakeFiles/exam.dir/todomodel.cpp.o" \
"CMakeFiles/exam.dir/main.cpp.o" \
"CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.o"

# External object files for target exam
exam_EXTERNAL_OBJECTS =

src/exam: src/CMakeFiles/exam.dir/mainwindow.cpp.o
src/exam: src/CMakeFiles/exam.dir/autotest.cpp.o
src/exam: src/CMakeFiles/exam.dir/todoview.cpp.o
src/exam: src/CMakeFiles/exam.dir/todomodel.cpp.o
src/exam: src/CMakeFiles/exam.dir/main.cpp.o
src/exam: src/CMakeFiles/exam.dir/exam_autogen/mocs_compilation.cpp.o
src/exam: src/CMakeFiles/exam.dir/build.make
src/exam: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.11.3
src/exam: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.11.3
src/exam: /usr/lib/x86_64-linux-gnu/libQt5Test.so.5.11.3
src/exam: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.11.3
src/exam: src/CMakeFiles/exam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uos/Desktop/devexam/exam21/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable exam"
	cd /home/uos/Desktop/devexam/exam21/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/exam.dir/build: src/exam

.PHONY : src/CMakeFiles/exam.dir/build

src/CMakeFiles/exam.dir/clean:
	cd /home/uos/Desktop/devexam/exam21/src && $(CMAKE_COMMAND) -P CMakeFiles/exam.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/exam.dir/clean

src/CMakeFiles/exam.dir/depend: src/ui_mainwindow.h
	cd /home/uos/Desktop/devexam/exam21 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uos/Desktop/devexam/exam21 /home/uos/Desktop/devexam/exam21/src /home/uos/Desktop/devexam/exam21 /home/uos/Desktop/devexam/exam21/src /home/uos/Desktop/devexam/exam21/src/CMakeFiles/exam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/exam.dir/depend

