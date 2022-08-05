#include "apue.h"
#include "function.h"
#include <fcntl.h>
char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";
char buf[] ="a";
int main(void)
{
	int fd,i;
	if ((fd = creat("file.nohole", FILE_MODE)) < 0)
		err_sys("creat error");
	for(i=0; i<16394; i++)
	{
		if (write(fd, buf, 1) != 1)
			err_sys("buf1 write error");
	}
	/* offset now = 10 
		if (lseek(fd, 16384, SEEK_SET) == -1)
			err_sys("lseek error");
	 offset now = 16384 
	if (write(fd, buf2, 10) != 10)
		err_sys("buf2 write error");
	 offset now = 16394 */
	exit(0);
}

