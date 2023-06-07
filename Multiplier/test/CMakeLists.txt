# Add the Google Test-based test executable
add_executable(gtest_Multiplier_functions gtest_functions.cpp)

# Link the Google Test libraries
target_link_libraries(gtest_Multiplier_functions gtest gtest_main)

# Link the test executable with the multiplier library
target_link_libraries(gtest_Multiplier_functions Multiplier)
