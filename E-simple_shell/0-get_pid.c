#include <stdio.h>
#include <unistd.h>

/**
 * main - get process id
 * Return: 0
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("Process ID: %u\n", my_pid);

	return (0);
}
