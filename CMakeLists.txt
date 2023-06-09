cmake_minimum_required(VERSION 3.25.2)

# set the project name
project(sample_math_project)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include the subdirectories
add_subdirectory(Adder)
add_subdirectory(Multiplier)

# Add the main executable
add_executable(main main.cpp)

# Link the main executable with the multiplier library
target_link_libraries(main Multiplier)

## Include and link gtest
include(FetchContent)
FetchContent_Declare(
    googletest
    # Specify the commit you depend on and update it regularly.
    URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

## Add GTest required libraries to linker
link_libraries(${GTEST_LIBRARIES} gtest_main pthread)

target_link_libraries(main gtest gtest_main)


