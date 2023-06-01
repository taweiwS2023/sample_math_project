cmake_minimum_required(VERSION 3.10)

# set the project name
project(sample_math_project)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Include the subdirectories
add_subdirectory(Adder)
add_subdirectory(Multiplier)

# Add the main executable
add_executable(main main.cpp)

# Link the main executable with the Multiplier library
target_link_libraries(main Multiplier)

# Include and link gtest
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
target_link_libraries(main gtest gtest_main)
