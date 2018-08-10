cmake_minimum_required(VERSION 3.10)
project(LearnGTest)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnGTest main.cpp)
target_link_libraries(LearnGTest libgtest.a)
target_link_libraries(LearnGTest libpthread.so)