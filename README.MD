# Sample Math Project

This is a C++ project that demonstrates a modular structure and includes an Adder and multiplier module.

## Prerequisites

To build and run this project, make sure you have the following installed:

- C++ compiler (GCC, Clang, etc.)
- CMake build system
- Make build tool

## Getting Started

To get started with the project, follow these steps:

1. Clone the repository:

   ```shell
   git clone https://github.com/taweiwS2023/sample_math_project.git
   ```

2. Navigate to the project root directory:

   ```shell
   cd sample_math_project
   ```

3. Create a build directory:

   ```shell
   mkdir build
   ```

4. Configure the project using CMake:

   ```shell
   cd build
   cmake ..
   ```

5. Build the project:

   ```shell
   make
   ```

6. Run the `main` executable:

   ```shell
   ./main
   ```

## Running Tests

To run the tests, navigate to the build directory and execute the respective test executables:

- For Adder module tests:

  ```shell
  cd build/Adder/test
  ./gtest_Adder_functions
  ```

- For multiplier module tests:

  ```shell
  cd build/multiplier/test
  ./gtest_Multiplier_functions
  ```

## Contributing

Contributions to this project are welcome. Feel free to submit bug reports, feature requests, or pull requests.

<!-- ## License

This project is licensed under the [MIT License](LICENSE). -->
