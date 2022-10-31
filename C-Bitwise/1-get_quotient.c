#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the quotient and remainder of operands
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int quotient;
	int remainder;

	if (argc == 3)
	{
		quotient = atoi(argv[1]) / atoi(argv[2]);
		remainder = atoi(argv[1]) % atoi(argv[2]);
		printf("Quotient = %d, Remainder = %d\n", quotient, remainder);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
