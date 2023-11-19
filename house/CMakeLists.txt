add_library(HouseLibrary STATIC house.cxx)  

target_include_directories(HouseLibrary PUBLIC "${PROJECT_SOURCE_DIR}/Residence")