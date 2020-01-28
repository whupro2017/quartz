include_directories(${CMAKE_SOURCE_DIR}/src/lib)
add_executable(multimalloc multimalloc.c)
target_link_libraries(multimalloc nvmemul pthread)
