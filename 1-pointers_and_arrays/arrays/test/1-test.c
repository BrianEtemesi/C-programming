#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int *arr;

	arr = malloc((sizeof(int)));
	if (arr == NULL)
		return (-1);

	arr[0] = 1;
	arr[1] = 2;

	printf("arr[1] = %d\n", arr[1]);

	return (0);
}
