#include <stdio.h>
#include <stdlib.h>

/**
 * main - test the getline() function
 * Return: 0
 */

int main(void)
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = malloc(sizeof(char) * bufsize);
	if (buffer == NULL)
	{
		perror("memory allocation failed");
		exit(1);
	}

	printf("Type something: ");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("You typed: '%s'\n", buffer);

	return (0);
}
