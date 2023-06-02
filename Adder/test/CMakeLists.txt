# Add the Google Test-based test executable
add_executable(gtest_adder gtest_adder.cpp)

# Link the Google Test libraries
target_link_libraries(gtest_adder gtest gtest_main)

# Link the test executable with the Adder library
target_link_libraries(gtest_adder Adder)

# Add the test to CTest
add_test(NAME gtest_adder COMMAND gtest_adder)
