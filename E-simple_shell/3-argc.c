#include <stdio.h>

/**
 * main - print arguments without using argc
 * @argc: argument count
 * @argv: argument counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
