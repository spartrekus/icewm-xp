
#include <stdio.h>
#if defined(__linux__)
#define MYOS 1
#elif defined(_WIN32)
#define MYOS 2
#elif defined(_WIN64)
#define MYOS 3
#elif defined(__unix__)
#define MYOS 4
#define PATH_MAX 2500
#else
#define MYOS 0
#endif
#include <string.h>
#include <stdlib.h>

#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h> 





int main( int argc, char *argv[])
{

    system( " wget https://download.freebsd.org/ftp/snapshots/arm64/aarch64/ISO-IMAGES/13.0/FreeBSD-13.0-CURRENT-arm64-aarch64-RPI3-20181213-r342020.img.xz " );

   return 0;
}




