# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/victorien/Documents/info/moteur3D_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/victorien/Documents/info/moteur3D_C/out/build

# Include any dependencies generated for this target.
include external/SDL/CMakeFiles/SDL3_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.make

# Include the progress variables for this target.
include external/SDL/CMakeFiles/SDL3_test.dir/progress.make

# Include the compile flags for this target's objects.
include external/SDL/CMakeFiles/SDL3_test.dir/flags.make

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_assert.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_assert.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_assert.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_assert.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_common.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_common.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_common.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_common.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_compare.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_compare.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_compare.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_compare.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_crc32.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_crc32.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_crc32.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_crc32.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_font.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_font.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_font.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_font.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_fuzzer.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_fuzzer.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_fuzzer.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_fuzzer.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_harness.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_harness.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_harness.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_harness.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_log.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_log.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_log.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_log.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_md5.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_md5.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_md5.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_md5.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_memory.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_memory.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_memory.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_memory.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.s

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o: external/SDL/CMakeFiles/SDL3_test.dir/flags.make
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o: /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_random.c
external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o: external/SDL/CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o -MF CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o.d -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o -c /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_random.c

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.i"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_random.c > CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.i

external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.s"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/victorien/Documents/info/moteur3D_C/external/SDL/src/test/SDL_test_random.c -o CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.s

# Object files for target SDL3_test
SDL3_test_OBJECTS = \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o"

# External object files for target SDL3_test
SDL3_test_EXTERNAL_OBJECTS =

external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.o
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/build.make
external/SDL/libSDL3_test.a: external/SDL/CMakeFiles/SDL3_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/victorien/Documents/info/moteur3D_C/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C static library libSDL3_test.a"
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && $(CMAKE_COMMAND) -P CMakeFiles/SDL3_test.dir/cmake_clean_target.cmake
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SDL3_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/SDL/CMakeFiles/SDL3_test.dir/build: external/SDL/libSDL3_test.a
.PHONY : external/SDL/CMakeFiles/SDL3_test.dir/build

external/SDL/CMakeFiles/SDL3_test.dir/clean:
	cd /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL && $(CMAKE_COMMAND) -P CMakeFiles/SDL3_test.dir/cmake_clean.cmake
.PHONY : external/SDL/CMakeFiles/SDL3_test.dir/clean

external/SDL/CMakeFiles/SDL3_test.dir/depend:
	cd /home/victorien/Documents/info/moteur3D_C/out/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/victorien/Documents/info/moteur3D_C /home/victorien/Documents/info/moteur3D_C/external/SDL /home/victorien/Documents/info/moteur3D_C/out/build /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL /home/victorien/Documents/info/moteur3D_C/out/build/external/SDL/CMakeFiles/SDL3_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/SDL/CMakeFiles/SDL3_test.dir/depend

