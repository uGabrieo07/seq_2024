# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/structs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/structs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/structs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/structs.dir/flags.make

CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj: CMakeFiles/structs.dir/flags.make
CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj: C:/Users/gabri/OneDrive/Documentos/GitHub/seq_2024/Exemplos/Estruturas/structs.c
CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj: CMakeFiles/structs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj -MF CMakeFiles\structs.dir\Exemplos\Estruturas\structs.c.obj.d -o CMakeFiles\structs.dir\Exemplos\Estruturas\structs.c.obj -c C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\Exemplos\Estruturas\structs.c

CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\Exemplos\Estruturas\structs.c > CMakeFiles\structs.dir\Exemplos\Estruturas\structs.c.i

CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\Exemplos\Estruturas\structs.c -o CMakeFiles\structs.dir\Exemplos\Estruturas\structs.c.s

# Object files for target structs
structs_OBJECTS = \
"CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj"

# External object files for target structs
structs_EXTERNAL_OBJECTS =

structs.exe: CMakeFiles/structs.dir/Exemplos/Estruturas/structs.c.obj
structs.exe: CMakeFiles/structs.dir/build.make
structs.exe: CMakeFiles/structs.dir/linkLibs.rsp
structs.exe: CMakeFiles/structs.dir/objects1.rsp
structs.exe: CMakeFiles/structs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable structs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\structs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/structs.dir/build: structs.exe
.PHONY : CMakeFiles/structs.dir/build

CMakeFiles/structs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\structs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/structs.dir/clean

CMakeFiles/structs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024 C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024 C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\cmake-build-debug C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\cmake-build-debug C:\Users\gabri\OneDrive\Documentos\GitHub\seq_2024\cmake-build-debug\CMakeFiles\structs.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/structs.dir/depend

