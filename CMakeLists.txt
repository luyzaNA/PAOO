cmake_minimum_required(VERSION 3.10)

project(ResidenceDemo VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fno-elide-constructors")

add_subdirectory(Residence)
add_subdirectory(Apartament)
add_subdirectory(House)
add_subdirectory(StudioApartament)

add_executable(ResidenceDemo main.cxx)

target_link_libraries(ResidenceDemo PUBLIC  ResidenceLibrary ApartamentLibrary  HouseLibrary  StudioApartamentLibrary)

target_include_directories(ResidenceDemo PUBLIC 
    "${PROJECT_BINARY_DIR}" 
    "${PROJECT_SOURCE_DIR}/Residence"
    "${PROJECT_SOURCE_DIR}/Apartament"
    "${PROJECT_SOURCE_DIR}/House"
    "${PROJECT_SOURCE_DIR}/StudioApartament"
    )