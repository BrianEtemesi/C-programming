#include "main.h"

/**
 * main - open file by system call
 * Return: 0
 */

int main(void)
{
	int x, fd = open("newfile2.txt", O_RDWR | O_CREAT, 0600);

	if (fd == -1)
		printf("Error! failed to create file\n");

	printf("file descriptor for open = %d\n", fd);
	
	x = close(fd);

	if (x < 0)
		printf("file failed to close\n");
	printf("close function returned %d\n", x);

	return (0);
}
