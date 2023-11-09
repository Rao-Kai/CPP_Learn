cmake_minimum_required(VERSION 3.22)
project(singleton_demos)

set(CMAKE_CXX_STANDARD 14)
set( CMAKE_BUILD_TYPE "Debug" )

#add_library(sing1 singleton1/sing.cpp)

add_executable(main1 singleton1/main.cpp singleton1/sing.cpp)
add_executable(main2 singleton2/main.cpp)
add_executable(main3 singleton3/main.cpp)
