#include <stdlib.h>
#include <stdio.h>

/**
 * main - allocate memory using calloc
 * Return: 0
 */

int main(void)
{
	float *p1, *p2;
	int i, j, n;

	n = 5;

	p1 = malloc(sizeof(float) * n);
	if (p1 == NULL)
		printf("malloc() failed\n");

	p2 = calloc(n, sizeof(float));
	if (p2 == NULL)
		printf("calloc() failed\n");

	for (i = 0; i < n; i++)
	{
		printf("p1[%d] = %5.2f\n", i, p1[i]);
	}

	for (j = 0; j < n; j++)
	{
		printf("p2[%d] = %5.2f\n", j, p2[j]);
	}

	return (0);

}
