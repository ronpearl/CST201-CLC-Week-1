cmake_minimum_required(VERSION 3.6)
project(Week1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp classf.cpp classf.h "Week 1/Problem_1_11_4.cpp" "Week 1/Problem_1_11_4.h" "Week 1/Problem_1_11_4_part2.cpp" "Week 1/Problem_1_11_4_part2.h" Week2/MyNumbers.cpp Week2/MyNumbers.h)
add_executable(Week1 ${SOURCE_FILES})