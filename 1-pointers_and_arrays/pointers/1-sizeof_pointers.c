#include <stdio.h>

/**
 * main - get the size of different pointers
 *
 * Return: 0
 */

int main(void)
{
	int *pi, i;
	char *pc, c;

	printf("size of pointer pi= %lu while size of i= %lu, \n", sizeof(pi), sizeof(i));
	printf("size of pointer pc= %lu while size of c= %lu, \n", sizeof(pc), sizeof(c));

	return (0);
}
