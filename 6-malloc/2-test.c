#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - points to new memory containing duplicate of string
 * @str: string input
 * Return: pointer to string duplicate
 */

char *_strdup(char *str)
{
	char *pstr;
	int i;

	pstr = malloc(sizeof(str));

	printf("the size of str is %ld\n", sizeof(str));

	for (i = 0; str[i]; i++)
	{
		pstr[i] = str[i];
	}
	
	pstr[i] = '\0';

	return (pstr);
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *dup;

	dup = _strdup("First, solve the problem. Then, write the code.");

	printf("%s\n", dup);

	return (0);
}
