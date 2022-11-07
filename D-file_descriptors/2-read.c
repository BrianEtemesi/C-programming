#include "main.h"

/**
 * main - use system call to read file
 * Return: 0
 */

int main(void)
{
	int fd, sz;
	char *c;

	c = malloc(1000);
	if (c == NULL)
		printf("Memory allocation for c failed\n");
		//return (-1);

	fd = open("newfile2.txt", O_RDWR | O_CREAT, 0600);
	if (fd < 0)
		printf("Failed to create file\n");
		//return (-1);
	
	sz = read(fd, c, 10);

	printf("called read(%d, c, 10).\n", fd);
	printf("Returned that %d bytes were read\n", sz);

	c[sz] = '\0';

	printf("The bytes are: %s\n", c);

	return (0);
}
