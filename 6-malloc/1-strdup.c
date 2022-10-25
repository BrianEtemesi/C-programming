#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a memory to a string
 * @str: string input
 * Return: pointer to memory created
 */

char *_strdup(char *str)
{
	char *ps;
	int i;

	ps = malloc(sizeof(str));
	if (ps == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ps[i] = str[i];
	}

	return (ps);
}
