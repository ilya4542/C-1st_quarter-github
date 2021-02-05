CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(Lesson1)
 
add_executable(lesson1 src/lesson1.cpp)
    
target_include_directories(lesson1 PRIVATE include)
