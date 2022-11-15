#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - use execve to execute 2-max_pid(from current directory)
 * Return: 0
 */

int main(void)
{
	char *args[] = {"./2-max_pid", NULL};
	char *envp[] = {"some", NULL};

	execve(args[0], args, envp);

	/* all statements are ignored after calling execve */
	/* the whole process is replaced by 2-max_pid */

	printf("This will not print after the execve call");

	return (0);
}
