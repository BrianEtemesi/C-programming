#include <stdio.h>

/**
 * main - execute Binary AND operator
 * Return: 0
 */

int main(void)
{
	int c, a = 12, b = 25;

	c = a & b;
	printf("12 & 25 = %d\n", c);
	printf("12 & 25 = %d\n", a & b);
	printf("12 & 25 = %d\n", 12 & 25);

	return (0);
}
