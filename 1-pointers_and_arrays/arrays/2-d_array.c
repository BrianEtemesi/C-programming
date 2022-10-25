#include <stdio.h>

/**
 * main - initializes a 2-d array
 * Return: 0
 */

int main(void)
{
	int i, j, k;
	int *arr;

	k = 1;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = k;
			k++;
		}
	}

	for (i = 0; i < 4; i++)
	{
		printf("\n");

		for (j = 0; j < 5; j++)
		{
			printf("%3d", arr[i][j]);
		}
	}

	printf("\n");
	return (0);
}
