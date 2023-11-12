cmake_minimum_required(VERSION 3.20)
project (MyProject)

add_subdirectory(Catch2)
add_executable(MyProject main-test.cpp ListFunc.cpp) 
target_link_libraries(MyProject PRIVATE Catch2::Catch2)