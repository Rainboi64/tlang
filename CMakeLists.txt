cmake_minimum_required(VERSION 3.26)
project(tlang_c C)

set(CMAKE_C_STANDARD 11)

add_executable(tlang_c src/main.c
        src/common.h
        src/core/chunk.h
        src/core/chunk.c
        src/core/memory.h
        src/core/memory.c
        src/core/debug.h
        src/core/debug.c
        src/core/value.c
        src/core/value.h
        src/runtime/vm.c
        src/runtime/vm.h
        src/utils/file.c
        src/runtime/compiler.c
        src/runtime/compiler.h
        src/runtime/scanner.c
        src/runtime/scanner.h
        src/core/object.c
        src/core/object.h
        src/core/table.c
        src/core/table.h)
