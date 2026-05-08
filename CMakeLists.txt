cmake_minimum_required(VERSION 3.20)
project(libmap C)

file(GLOB LIBMAP_SRC "src/*.c")
add_library(libmap STATIC ${LIBMAP_SRC})
target_include_directories(libmap PUBLIC "include")
target_include_directories(libmap PRIVATE "include/libmap")
set_target_properties(libmap PROPERTIES POSITION_INDEPENDENT_CODE ON)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

#set(CMAKE_SWIG_FLAGS "-E")

swig_add_library(libmap_bindings
    TYPE SHARED
    LANGUAGE CSharp
    SOURCES "libmap.i"
    OUTPUT_DIR "dotnetout"
)

target_include_directories(libmap_bindings PRIVATE  "include/libmap")
target_link_libraries(libmap_bindings PRIVATE libmap)
set_target_properties(libmap_bindings PROPERTIES POSITION_INDEPENDENT_CODE ON)
