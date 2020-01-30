include_directories(${CMAKE_SOURCE_DIR}/src/lib)
add_executable(cpluscase cpluscase.cpp)
target_link_libraries(cpluscase nvmemul pthread)
