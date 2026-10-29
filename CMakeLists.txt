cmake_minimum_required(VERSION 3.16)
project(simd_dsl_codegen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# The generated sources were produced by ANTLR 4.13.2. The system runtime is
# 4.10, which is not source-compatible with those generated files.
set(ANTLR4_RUNTIME_ROOT
    "${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source"
    CACHE PATH "Root of an ANTLR 4.13.2 C++ runtime build")

find_path(ANTLR4_RUNTIME_INCLUDE_DIR
    NAMES antlr4-runtime.h
    PATHS "${ANTLR4_RUNTIME_ROOT}/runtime/src"
    NO_DEFAULT_PATH
    REQUIRED)
find_library(ANTLR4_RUNTIME_LIBRARY
    NAMES antlr4-runtime
    PATHS "${ANTLR4_RUNTIME_ROOT}/build/runtime" "${ANTLR4_RUNTIME_ROOT}/dist"
    NO_DEFAULT_PATH
    REQUIRED)

file(GLOB SIMDDLS_GENERATED_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.cpp")

add_executable(generate_c
    codegen/generate_c.cpp
    codegen/SimdDslCodeGenerator.cpp
    ${SIMDDLS_GENERATED_SOURCES})
target_include_directories(generate_c PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/generated"
    "${ANTLR4_RUNTIME_INCLUDE_DIR}")
target_link_libraries(generate_c PRIVATE "${ANTLR4_RUNTIME_LIBRARY}")
set_target_properties(generate_c PROPERTIES
    BUILD_RPATH "${ANTLR4_RUNTIME_ROOT}/build/runtime;${ANTLR4_RUNTIME_ROOT}/dist")
