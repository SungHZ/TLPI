cmake_minimum_required(VERSION 2.8)

project(TLPI)

include_directories(include)
include_directories(UsersGroups)
include_directories(Time)

add_subdirectory(lib)
add_subdirectory(FileIO)
add_subdirectory(Proc)
add_subdirectory(Memalloc)
add_subdirectory(UsersGroups)
add_subdirectory(ProcCred)
add_subdirectory(Time)

add_subdirectory(Timers)



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
