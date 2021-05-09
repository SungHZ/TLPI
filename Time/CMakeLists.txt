add_executable(calendar_time calendar_time.c)
add_executable(strtime strtime.c)
add_executable(show_time show_time.c)
add_executable(process_time process_time.c)

target_link_libraries(calendar_time getnumerror)
target_link_libraries(strtime getnumerror)
target_link_libraries(show_time getnumerror)
target_link_libraries(process_time getnumerror)


add_library(currtime SHARED curr_time.c)


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
