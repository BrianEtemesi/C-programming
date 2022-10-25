#include <stdio.h>

/**
 * main - intialize values to an array
 *
 * Return: 0
 */

int main(void)
{
	int list[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		list[i] = i + 1;
		printf("list[%d] is initialized with %d\n", i, list[i]);
	}

	return (0);
}
