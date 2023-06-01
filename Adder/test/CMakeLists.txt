# Add the Google Test-based test executable
add_executable(gtest_Adder_functions gtest_functions.cpp)

# Link the Google Test libraries
target_link_libraries(gtest_Adder_functions gtest gtest_main)

# Link the test executable with the Adder library
target_link_libraries(gtest_Adder_functions Adder)