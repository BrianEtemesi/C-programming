#include <stdio.h>

/**
 * main - print out a 2-D array
 * Return: 0
 */

int main(void)
{
	int arr[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	int i, j;
	
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
	}
	printf("\n");
	return (0);
}
