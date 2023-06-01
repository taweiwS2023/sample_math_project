# Use a base image with the necessary dependencies for your C++ project
FROM ubuntu:latest

# Set the working directory inside the container
WORKDIR /app

# Install dependencies required for building and running the C++ project
RUN apt-get update && apt-get install -y \
    g++ \
    cmake

# Copy the project files into the container
COPY . .

# Build the C++ project
RUN cmake . && make

# Set the entrypoint command to run the compiled main executable
ENTRYPOINT ["./main"]

# Define the default command to be used when no command-line arguments are provided
CMD ["--help"]
