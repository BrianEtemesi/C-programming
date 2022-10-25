#include <stdlib.h>
#include <stdio.h>

/**
 * main - lists and sums up numbers using arguments to main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;


	for (i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		sum = sum + atoi(argv[i]);
	}

	printf("sum = %d\n", sum);

	return (0);
}
