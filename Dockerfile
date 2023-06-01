# Use a base image with C++ and CMake
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /app

# Copy the project files to the container
COPY . /app

# Install necessary dependencies
RUN apt-get update && \
    apt-get install -y cmake && \
    apt-get clean

# Build the project
RUN mkdir build && \
    cd build && \
    cmake .. && \
    make

# Set the entrypoint to run the main executable
ENTRYPOINT ["./build/main"]