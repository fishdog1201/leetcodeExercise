cmake_minimum_required(VERSION 3.20)
project(leetcodeExercise)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(linkedList)
add_subdirectory(binaryTree)