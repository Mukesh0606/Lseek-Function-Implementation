/*   Q1(A).  Run the program in Figure 3.1 to test if the standard input is capable of seeking and write your report on it.
 *   
 *   The program in Figure 3.1 tests its standard input to see whether it is capable of seeking.
 *   Mukesh J
 *   06/02/2022
 *   */

#include "apue.h"
#include "function.h"
int main(void)
{
	if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
		printf("cannot seek\n");
	else
		printf("seek OK\n");
	exit(0);
}
