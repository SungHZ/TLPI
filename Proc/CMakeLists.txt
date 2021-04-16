add_executable(t_getenv t_getenv.c)
add_executable(setjmp_vars setjmp_vars.c)
add_executable(longjmp longjmp.c)
add_executable(bad_longjmp bad_longjmp.c)
add_executable(modify_env modify_env.c)

target_link_libraries(t_getenv getnumerror)
target_link_libraries(longjmp getnumerror)
target_link_libraries(bad_longjmp getnumerror)
target_link_libraries(modify_env getnumerror)


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
