cmake_minimum_required(VERSION 2.8.9)
project(cmplx)
set(CMAKE_BUILD_TYPE Release)
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(cmplx SHARED ${SOURCES})

install(TARGETS cmplx DESTINATION /usr/lib)
