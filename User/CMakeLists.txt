cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

project(User)

file(GLOB_RECURSE source_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
file(GLOB_RECURSE include_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${source_files} ${include_files})

add_executable(UserExe ${source_files} ${include_files})
target_link_libraries(UserExe PRIVATE Engine)