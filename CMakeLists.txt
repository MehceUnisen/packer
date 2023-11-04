project(packer)

cmake_minimum_required(VERSION 3.10)


file(GLOB PROJECT_SOURCES
    */*.h
    */*.cpp
    )
message(STATUS "PROJECT_SOURCES:\n${PROJECT_SOURCES}")

find_package(Threads REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ggdb")
set(THREADS_PREFER_PTHREAD_FLAG OFF)

include_directories(SYSTEM /usr/include/c++/7)
include_directories("./resources")
include_directories("./inc")
add_executable(packer ${PROJECT_SOURCES})
