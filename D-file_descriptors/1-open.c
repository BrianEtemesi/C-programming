#include "main.h"

/**
 * main - open file by system call
 * Return: 0
 */

int main(void)
{
	int fd = open("newfile.txt", O_RDONLY);

	if (fd == -1)
		printf("Error! failed to create file\n");

	printf("file descriptor for open = %d\n", fd);

	return (0);
}
