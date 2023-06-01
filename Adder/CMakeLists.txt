# Add library
add_library(Adder src/functions.cpp)

# Include directory for library
target_include_directories(Adder PUBLIC include)

# Add subdirectory for tests
add_subdirectory(test)