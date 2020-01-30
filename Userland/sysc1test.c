#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>

int main(int argc, char *argv[])
{
	if (argc !=2)
	{
		printf("One integer argument expected!\n");
		return -1;
	}
	
	printf("labsysc1 returns: %ld.\n", syscall(333, atoi(argv[1])));
	
	return 0;
}
