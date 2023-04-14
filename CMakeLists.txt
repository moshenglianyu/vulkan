cmake_minimum_required(VERSION 3.26.1)

project(vulkan)

set(CMAKE_CXX_STANDARD 20)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GLFW)

link_directories(${CMAKE_CURRENT_BINARY_DIR}/GLFW)

# find_package(glfw3 REQUIRED)

# file(GLOB SRC_FILES
# "${PROJECT_SOURCE_DIR}/*.cpp"
# "${PROJECT_SOURCE_DIR}/*.hpp"
# "${PROJECT_SOURCE_DIR}/*.h"
# "${PROJECT_SOURCE_DIR}/GLFW/*.h"
# )



aux_source_directory(. SRC_FILES)

add_executable(main ${SRC_FILES})
target_link_libraries(main glfw)