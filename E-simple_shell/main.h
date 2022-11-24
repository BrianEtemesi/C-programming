#ifndef MAIN_H
#define MAIN_H
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"
#include <stdlib.h>
#include <string.h>

void _loop(void);
char *_readline(void);
char **_splitline(char *line);

/**
 * _loop - read, parse and executed parsed commands
 */

void _loop(void)
{
	int i;
	char *line;
	char **args;

	do
	{
		printf("$ ");
		line = _readline();
		printf("You entered: %s\nTokenized to:\n", line);
		args = _splitline(line);

		for (i = 0; args[i]; i++)
		{
			printf("%s\n", args[i]);
		}

		free(line);
		free(args);
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

/**
 * _splitline - splits line to arguments
 * @line: line to be tokenized
 * Return: Pointer to an array of pointers/ list of arguments
 */

char **_splitline(char *line)
{
	int bufsize = TOK_BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= bufsize)
		{
			bufsize += TOK_BUFSIZE;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if (!tokens)
			{
				fprintf(stderr, "lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}



















#endif /* MAIN_H */
