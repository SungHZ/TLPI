project(TLPI)

aux_source_directory(. DIR_LIB_SRCS)

add_library(getnumerror SHARED ${DIR_LIB_SRCS})