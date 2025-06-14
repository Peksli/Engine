cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

project(Engine)

file(GLOB_RECURSE source_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
file(GLOB_RECURSE include_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${source_files} ${include_files})

add_library(Engine STATIC ${source_files} ${include_files})
target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})