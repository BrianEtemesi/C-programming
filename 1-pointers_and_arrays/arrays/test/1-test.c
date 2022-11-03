#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0
 */
int memsize(int n);

int main(void)
{
	int *arr;
	int rem, i = 0, x = 6;
	unsigned long int n = 8;
	int size = memsize(n);

	printf("size of binary is %d bits\n", size);

	arr = malloc((sizeof(int) * size));
	if (arr == NULL)
		return (-1);

	while (n != 0)
	{
		rem = n % 2;
		if (rem != 1)
			rem = x;
		arr[i] = rem;
		n = n / 2;
		i++;
	}

	for (i = 0; arr[i]; i++)
	{
		printf("%d", arr[i]);
	}

	printf("\n");

	return (0);
}

int memsize(int n)
{
	int i = 0;

	while (n != 0)
	{
		n = n / 2;
		i++;
	}

	return (i);
}
