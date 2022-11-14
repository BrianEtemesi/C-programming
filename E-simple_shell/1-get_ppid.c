#include <stdio.h>
#include <unistd.h>

/**
 * main - get parent process ID
 * Return: 0
 */

int main(void)
{
	pid_t my_pid, p_pid;

	my_pid = getpid();
	p_pid = getppid();

	printf("Process ID: %u\n", my_pid);
	printf("Parent PID: %u\n", p_pid);

	return (0);
}
