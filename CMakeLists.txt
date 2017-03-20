cmake_minimum_required(VERSION 2.8)
project(Test)

SET(SOURCE
  main.cpp
)

INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(test ${SOURCE})
