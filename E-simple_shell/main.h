#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>


void _loop(void);

/**
 * _loop - read, parse and executed parsed commands
 */

void _loop(void)
{
	char *line;

	do
	{
		printf("$ ");
		line = _readline();
		printf("%s\n", line);
	} while (1);
}

/**
 * _readline - reads line from standard input
 * Return: pointer to memory location of line
 */

char *_readline(void)
{
	char *line = NULL;
	ssize_t bufsize = 0; /* have getline allocate buffer for us */

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS); /* we received an EOF */
		}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	return line;
}

#endif /* MAIN_H */
