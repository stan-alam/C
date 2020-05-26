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
	/* open output file for write - same permissions as source */
	write_fd = open (arg[2], O_WRONLY | O_CREAT, stat_buf.st_mode);
	/* stream bytes from source file to target file*/
	sendfile(write_fd, read_fd, &offset, stat_buf.st_size);
	/*close*/
	close(read_fd);
	close(write_fd);

	return 0;
}
