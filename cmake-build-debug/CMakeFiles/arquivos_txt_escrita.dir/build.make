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
CMAKE_SOURCE_DIR = "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/arquivos_txt_escrita.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arquivos_txt_escrita.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arquivos_txt_escrita.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arquivos_txt_escrita.dir/flags.make

CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj: CMakeFiles/arquivos_txt_escrita.dir/flags.make
CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj: C:/Users/Pichau/Documents/João/UFRJ/for_code/SEQ/Minicurso\ de\ Introdução\ a\ C/seq_2024/arquivos_txt_escrita.c
CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj: CMakeFiles/arquivos_txt_escrita.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj -MF CMakeFiles\arquivos_txt_escrita.dir\arquivos_txt_escrita.c.obj.d -o CMakeFiles\arquivos_txt_escrita.dir\arquivos_txt_escrita.c.obj -c "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\arquivos_txt_escrita.c"

CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\arquivos_txt_escrita.c" > CMakeFiles\arquivos_txt_escrita.dir\arquivos_txt_escrita.c.i

CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\arquivos_txt_escrita.c" -o CMakeFiles\arquivos_txt_escrita.dir\arquivos_txt_escrita.c.s

# Object files for target arquivos_txt_escrita
arquivos_txt_escrita_OBJECTS = \
"CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj"

# External object files for target arquivos_txt_escrita
arquivos_txt_escrita_EXTERNAL_OBJECTS =

arquivos_txt_escrita.exe: CMakeFiles/arquivos_txt_escrita.dir/arquivos_txt_escrita.c.obj
arquivos_txt_escrita.exe: CMakeFiles/arquivos_txt_escrita.dir/build.make
arquivos_txt_escrita.exe: CMakeFiles/arquivos_txt_escrita.dir/linkLibs.rsp
arquivos_txt_escrita.exe: CMakeFiles/arquivos_txt_escrita.dir/objects1.rsp
arquivos_txt_escrita.exe: CMakeFiles/arquivos_txt_escrita.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable arquivos_txt_escrita.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arquivos_txt_escrita.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arquivos_txt_escrita.dir/build: arquivos_txt_escrita.exe
.PHONY : CMakeFiles/arquivos_txt_escrita.dir/build

CMakeFiles/arquivos_txt_escrita.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\arquivos_txt_escrita.dir\cmake_clean.cmake
.PHONY : CMakeFiles/arquivos_txt_escrita.dir/clean

CMakeFiles/arquivos_txt_escrita.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug\CMakeFiles\arquivos_txt_escrita.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/arquivos_txt_escrita.dir/depend

