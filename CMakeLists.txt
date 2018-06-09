cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(LuaGL)

link_libraries(${CMAKE_SOURCE_DIR}/libs/lua/liblua.a)

include_directories(${CMAKE_SOURCE_DIR}/include/lua/)
include_directories(${CMAKE_SOURCE_DIR}/include/LuaBridge/)

add_executable(LuaGL Main.cpp Start.cpp LuaBridgeHelpers.cpp LuaBridgeHelpers.hpp)