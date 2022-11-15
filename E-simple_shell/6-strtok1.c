#include <stdio.h>
#include <string.h>

/**
 * main - entry point / strtok using space as delimiter
 * Return: 0
 */

int main(void)
{
	char s[] = "Tuesdays are the new Monday";
	const char *d = " ";
	char *token;

	token = strtok(s, d);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, d);
	}

	return (0);
}
