add_executable(t_uname t_uname.c)
add_executable(procs_pidmax procs_pidmax.c)
add_executable(procfs_user_exe procfs_user_exe.c)

target_link_libraries(t_uname getnumerror)
target_link_libraries(procs_pidmax getnumerror)
target_link_libraries(procfs_user_exe getnumerror)
target_link_libraries(procfs_user_exe ugidfunctions)


#include_directories(include)

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
