#include <unistd.h>
#include <stdio.h>

/**
 * main - use execve() to execute "ls"
 * Return: 0
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("before execve\n");

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

	printf("After execve\n");

	return (0);
}
