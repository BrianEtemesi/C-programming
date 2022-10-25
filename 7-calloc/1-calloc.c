#include <stdlib.h>
#include <stdio.h>

/**
 * main - compare calloc and malloc initialization
 * Return: 0
 */

int main(void)
{
	float *ptr1, *ptr2;
	int i, n;
	int termination = 1;

	n = 5;
	ptr1 = calloc(n, sizeof(float));
	ptr2 = malloc(n * sizeof(float));

	if (ptr1 == NULL)
	{
		printf("malloc() failed.\n");
	}
	else if (ptr2 == NULL)
	{
		printf("calloc() failed.\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("ptr1[%d]=%5.2f, ptr2[%d]=%5.2f\n", i, *(ptr1 + i), i, *(ptr2 + i));
		}
		free(ptr1);
		free(ptr2);
		termination = 0;
	}
	return (termination);
}
