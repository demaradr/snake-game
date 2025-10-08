cmake_minimum_required(VERSION 3.20)
project(snake_cpp LANGUAGES CXX)

# Require C++17 (good balance for raylib + modern features)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find raylib installed by Homebrew
# Homebrew installs a CMake config package we can use with CONFIG
find_package(raylib CONFIG REQUIRED)

add_executable(snake src/main.cpp)

# Link raylib; its CMake target pulls in macOS frameworks automatically
target_link_libraries(snake PRIVATE raylib)

# On macOS, ensure we run from project root so assets (later) are found
set_property(TARGET snake PROPERTY RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build")
