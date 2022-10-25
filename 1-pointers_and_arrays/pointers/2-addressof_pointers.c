#include <stdio.h>

/**
 * main - get address of pointers
 *
 * Return: 0
 */

int main(void)
{
	int *pi, i;
	char *pc, c;

	printf("address of pointer pi=%p, address of i=%p\n", &pi, &i);
	printf("address of pointer pc=%p, address of c=%p\n", &pc, &c);

	return (0);
}
