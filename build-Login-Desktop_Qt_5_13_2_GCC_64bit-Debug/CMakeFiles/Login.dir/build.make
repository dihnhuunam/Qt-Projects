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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dihnhuunam/Workspace/Qt-Projects/Login

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Login.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Login.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Login.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Login.dir/flags.make

Login_autogen/EWIEGA46WW/qrc_resources.cpp: /home/dihnhuunam/Workspace/Qt-Projects/Login/resources.qrc
Login_autogen/EWIEGA46WW/qrc_resources.cpp: CMakeFiles/Login_autogen.dir/AutoRcc_resources_EWIEGA46WW_Info.json
Login_autogen/EWIEGA46WW/qrc_resources.cpp: /home/dihnhuunam/Workspace/Qt-Projects/Login/style.qss
Login_autogen/EWIEGA46WW/qrc_resources.cpp: /home/dihnhuunam/Qt5.13.2/5.13.2/gcc_64/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for resources.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles/Login_autogen.dir/AutoRcc_resources_EWIEGA46WW_Info.json Debug

CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o: CMakeFiles/Login.dir/flags.make
CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o: Login_autogen/mocs_compilation.cpp
CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o: CMakeFiles/Login.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o -c /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/Login_autogen/mocs_compilation.cpp

CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/Login_autogen/mocs_compilation.cpp > CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.i

CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/Login_autogen/mocs_compilation.cpp -o CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.s

CMakeFiles/Login.dir/main.cpp.o: CMakeFiles/Login.dir/flags.make
CMakeFiles/Login.dir/main.cpp.o: /home/dihnhuunam/Workspace/Qt-Projects/Login/main.cpp
CMakeFiles/Login.dir/main.cpp.o: CMakeFiles/Login.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Login.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Login.dir/main.cpp.o -MF CMakeFiles/Login.dir/main.cpp.o.d -o CMakeFiles/Login.dir/main.cpp.o -c /home/dihnhuunam/Workspace/Qt-Projects/Login/main.cpp

CMakeFiles/Login.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Login.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dihnhuunam/Workspace/Qt-Projects/Login/main.cpp > CMakeFiles/Login.dir/main.cpp.i

CMakeFiles/Login.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Login.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dihnhuunam/Workspace/Qt-Projects/Login/main.cpp -o CMakeFiles/Login.dir/main.cpp.s

CMakeFiles/Login.dir/mainwindow.cpp.o: CMakeFiles/Login.dir/flags.make
CMakeFiles/Login.dir/mainwindow.cpp.o: /home/dihnhuunam/Workspace/Qt-Projects/Login/mainwindow.cpp
CMakeFiles/Login.dir/mainwindow.cpp.o: CMakeFiles/Login.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Login.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Login.dir/mainwindow.cpp.o -MF CMakeFiles/Login.dir/mainwindow.cpp.o.d -o CMakeFiles/Login.dir/mainwindow.cpp.o -c /home/dihnhuunam/Workspace/Qt-Projects/Login/mainwindow.cpp

CMakeFiles/Login.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Login.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dihnhuunam/Workspace/Qt-Projects/Login/mainwindow.cpp > CMakeFiles/Login.dir/mainwindow.cpp.i

CMakeFiles/Login.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Login.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dihnhuunam/Workspace/Qt-Projects/Login/mainwindow.cpp -o CMakeFiles/Login.dir/mainwindow.cpp.s

CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o: CMakeFiles/Login.dir/flags.make
CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o: Login_autogen/EWIEGA46WW/qrc_resources.cpp
CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o: CMakeFiles/Login.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o -MF CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o.d -o CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o -c /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/Login_autogen/EWIEGA46WW/qrc_resources.cpp

CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/Login_autogen/EWIEGA46WW/qrc_resources.cpp > CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.i

CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/Login_autogen/EWIEGA46WW/qrc_resources.cpp -o CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.s

# Object files for target Login
Login_OBJECTS = \
"CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Login.dir/main.cpp.o" \
"CMakeFiles/Login.dir/mainwindow.cpp.o" \
"CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o"

# External object files for target Login
Login_EXTERNAL_OBJECTS =

Login: CMakeFiles/Login.dir/Login_autogen/mocs_compilation.cpp.o
Login: CMakeFiles/Login.dir/main.cpp.o
Login: CMakeFiles/Login.dir/mainwindow.cpp.o
Login: CMakeFiles/Login.dir/Login_autogen/EWIEGA46WW/qrc_resources.cpp.o
Login: CMakeFiles/Login.dir/build.make
Login: /home/dihnhuunam/Qt5.13.2/5.13.2/gcc_64/lib/libQt5Widgets.so.5.13.2
Login: /home/dihnhuunam/Qt5.13.2/5.13.2/gcc_64/lib/libQt5Gui.so.5.13.2
Login: /home/dihnhuunam/Qt5.13.2/5.13.2/gcc_64/lib/libQt5Core.so.5.13.2
Login: CMakeFiles/Login.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Login"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Login.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Login.dir/build: Login
.PHONY : CMakeFiles/Login.dir/build

CMakeFiles/Login.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Login.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Login.dir/clean

CMakeFiles/Login.dir/depend: Login_autogen/EWIEGA46WW/qrc_resources.cpp
	cd /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dihnhuunam/Workspace/Qt-Projects/Login /home/dihnhuunam/Workspace/Qt-Projects/Login /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug /home/dihnhuunam/Workspace/Qt-Projects/build-Login-Desktop_Qt_5_13_2_GCC_64bit-Debug/CMakeFiles/Login.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Login.dir/depend

