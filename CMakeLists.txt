#set version
cmake_minimum_required(VERSION 3.5.2)

project(orcas)

# project version
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)

# detect operating system
message(STATUS "We are on a ${CMAKE_SYSTEM_NAME} system")
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    add_definitions(-DSYSTEM_LINUX)
endif()
if(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    add_definitions(-DSYSTEM_DARWIN)
endif()
if(${CMAKE_SYSTEM_NAME} STREQUAL "AIX")
    add_definitions(-DSYSTEM_AIX)
endif()
if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    add_definitions(-DSYSTEM_WINDOWS)
endif()

# detect host processor
message(STATUS "The host processor is ${CMAKE_HOST_SYSTEM_PROCESSOR}")

add_subdirectory(core)
