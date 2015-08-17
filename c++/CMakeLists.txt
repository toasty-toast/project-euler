cmake_minimum_required(VERSION 2.8)

project(project-euler)

file(GLOB SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
foreach(SRC ${SRCS})
	string(REPLACE ".cpp" "" EXE_NAME ${SRC})
	add_executable(${EXE_NAME} ${SRC})
endforeach(SRC ${SRCS})