# Add the Adder library
add_library(Adder src/adder.cpp)

# Include directory for library
target_include_directories(Adder PUBLIC include)
