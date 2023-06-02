# Add the Google Test-based test executable
add_executable(test_multiplier gtest_multiplier.cpp)

# Link the Google Test libraries
target_link_libraries(test_multiplier gtest gtest_main)

# Link the test executable with the Multiplier library
target_link_libraries(test_multiplier Multiplier)

# Add the test to CTest
add_test(NAME test_multiplier  COMMAND test_multiplier)
