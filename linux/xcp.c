/* This program will be the analog to x.DOS' xcopy for POSIX */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/sendfile.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main( int argc, char* argv[] )
{
	int read_fd;
	int write_fd;
	struct stat stat_buff;
	off_t offset = 0;

	/* now open the input file */
	read_fd = open (argv[1], O_RDONLY);
	/* obtain the size of the input file */
	fstat ( read_fd, &stat_buf);
}
