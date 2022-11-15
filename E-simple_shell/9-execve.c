#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point / execve
 * Return: 0
 */

int main(void)
{
	char cmd[] = "/usr/bin/ls";
	char *argv[] = {"ls", "-l", NULL};
	char *env[] = {NULL};

	if (execve(cmd, argv, env) == -1)
	{
		perror("execve failed");
	}

	printf("should not print this\n");

	return (0);
}
