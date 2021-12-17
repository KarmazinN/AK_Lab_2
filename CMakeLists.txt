cmake_minimum_required(VERSION "3.10.2")

project("Calculator")
set(CMAKE_CXX_STANDART 17)

add_library(MyLib calculator.cpp calculator.h)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC MyLib)
