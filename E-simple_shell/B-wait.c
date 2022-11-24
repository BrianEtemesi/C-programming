#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - test wait sys call
 * Return: 0
 */

int main(void)
{
	pid_t p;

	printf("before fork\n");
	p = fork();

	if (p == 0)/* child */
	{
		printf("I am child with id %d\n", getpid());
		printf("My parent's id is %d\n", getppid());
	}
	else/* parent */
	{
		/* wait(NULL); */
		printf("My child's id is %d\n", p);
		printf("I am a parent having id %d\n", getpid());
	}

	printf("Common\n");

	return (0);
}
