/* large_file.c
 * 
 * Demonstrate the use of the (obsolete) Large File System API.
 * 
 * This program is Linux-specific.
*/
#define _LARGEFILE64_SOURCE
#include <sys/stat.h>
#include <fcntl.h>
#include "tlpi_hdr.h"

#define _FILE_OFFSET_BITS 64

int 
main(int argc, char *argv[])
{
    int fd;
    //off64_t off;
    off_t off;

    if(argc != 3 || strcmp(argv[1], "--help") == 0)
        usageErr("%s pathname offset\n", argv[0]);

    //fd = open64(argv[1], O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    fd = open(argv[1], O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    if(fd == -1)
        errExit("open64");

    off = atoll(argv[2]);
    //if(lseek64(fd, off, SEEK_SET) == -1)
    if(lseek(fd, off, SEEK_SET) == -1)
        errExit("lseek64");

    if(write(fd, "test", 4) == -1)
        errExit("write");

    if(close(fd) == -1)
        errExit("close");
    exit(EXIT_SUCCESS);
}