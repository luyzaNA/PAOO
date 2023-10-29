cmake_minimum_required(VERSION 3.10)

project(HouseDemo VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(house)

add_executable(HouseDemo main.cxx)

target_link_libraries(HouseDemo PUBLIC house)

target_include_directories(HouseDemo PUBLIC 
    "${PROJECT_BINARY_DIR}" 
    "${PROJECT_SOURCE_DIR}/house"
    )