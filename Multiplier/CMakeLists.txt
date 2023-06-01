# Add library
add_library(Multiplier src/functions.cpp)

# Include directory for library
target_include_directories(Multiplier PUBLIC include)

# Link the Multiplier library with the Adder library
target_link_libraries(Multiplier Adder)

# Add subdirectory for tests
add_subdirectory(test)
