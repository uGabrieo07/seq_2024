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
include CMakeFiles/scanf_printf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/scanf_printf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/scanf_printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scanf_printf.dir/flags.make

CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj: CMakeFiles/scanf_printf.dir/flags.make
CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj: C:/Users/Pichau/Documents/João/UFRJ/for_code/SEQ/Minicurso\ de\ Introdução\ a\ C/seq_2024/Exemplos/Estrutura\ Basica\ de\ Programas/scanf_printf.c
CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj: CMakeFiles/scanf_printf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj -MF CMakeFiles\scanf_printf.dir\Exemplos\Estrutura_Basica_de_Programas\scanf_printf.c.obj.d -o CMakeFiles\scanf_printf.dir\Exemplos\Estrutura_Basica_de_Programas\scanf_printf.c.obj -c "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\Exemplos\Estrutura Basica de Programas\scanf_printf.c"

CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\Exemplos\Estrutura Basica de Programas\scanf_printf.c" > CMakeFiles\scanf_printf.dir\Exemplos\Estrutura_Basica_de_Programas\scanf_printf.c.i

CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\Exemplos\Estrutura Basica de Programas\scanf_printf.c" -o CMakeFiles\scanf_printf.dir\Exemplos\Estrutura_Basica_de_Programas\scanf_printf.c.s

# Object files for target scanf_printf
scanf_printf_OBJECTS = \
"CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj"

# External object files for target scanf_printf
scanf_printf_EXTERNAL_OBJECTS =

scanf_printf.exe: CMakeFiles/scanf_printf.dir/Exemplos/Estrutura_Basica_de_Programas/scanf_printf.c.obj
scanf_printf.exe: CMakeFiles/scanf_printf.dir/build.make
scanf_printf.exe: CMakeFiles/scanf_printf.dir/linkLibs.rsp
scanf_printf.exe: CMakeFiles/scanf_printf.dir/objects1.rsp
scanf_printf.exe: CMakeFiles/scanf_printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable scanf_printf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\scanf_printf.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scanf_printf.dir/build: scanf_printf.exe
.PHONY : CMakeFiles/scanf_printf.dir/build

CMakeFiles/scanf_printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\scanf_printf.dir\cmake_clean.cmake
.PHONY : CMakeFiles/scanf_printf.dir/clean

CMakeFiles/scanf_printf.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug" "C:\Users\Pichau\Documents\João\UFRJ\for_code\SEQ\Minicurso de Introdução a C\seq_2024\cmake-build-debug\CMakeFiles\scanf_printf.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/scanf_printf.dir/depend

