project(orcas-core)

#set version
cmake_minimum_required(VERSION 3.5.2)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(inc)

set(HEADER_FILES
  inc/encode.hpp
)

set(SOURCES
  src/encode.cpp
  src/welcome.cpp
)

add_executable(
 core
 ${SOURCES} ${HEADER_FILES}
)
