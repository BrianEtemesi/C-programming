#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

#define MAX_COUNT 20
#define BUF_SIZE 100

/**
 * main - enty point / fork system call
 * Return: 0
 */

int main(void)
{
	pid_t pid;
	int i;
	char buf[BUF_SIZE];

	fork();
	pid = getpid();
	for (i = 1; i <= MAX_COUNT; i++)
	{
		sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
		write(1, buf, strlen(buf));
	}

	return (0);
}
