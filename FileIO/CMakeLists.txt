add_executable(copy copy.c)
add_executable(seek_io seek_io.c)
add_executable(t_readv t_readv.c)
add_executable(large_file large_file.c)
add_executable(atomic_append atomic_append.c)
add_executable(multi_descriptors multi_descriptors.c)

target_link_libraries(copy getnumerror)
target_link_libraries(seek_io getnumerror)
target_link_libraries(t_readv getnumerror)
target_link_libraries(large_file getnumerror)
target_link_libraries(atomic_append getnumerror)
target_link_libraries(multi_descriptors getnumerror)


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
