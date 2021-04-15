cmake_minimum_required(VERSION 2.8)

project(TLPI)

include_directories(include)

add_subdirectory(lib)
add_subdirectory(FileIO)

#aux_source_directory(src SRC_LIST)

#add_executable(main ${SRC_LIST})

#set( SRC_LIST
#     ./main.c
#     ./testFunc.c
#     ./testFunc1.c)

#aux_source_directory(src SRC_LIST)
#aux_source_directory(testFunc1 SRC_LIST1)
#add_subdirectory(src)
#add_executable(main main.c ${SRC_LIST} ${SRC_LIST1})
