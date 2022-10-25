#include <stdio.h>

/**
 * is98 - check if integer is 98
 * Return: 0 if not
 */

int is98(int a)
{
	return (a == 98);
}

/**
 * main - entry point
 * Return: 
 */

int main(void)
{
	int b, c;

	b = 98;
	c = 7;

	printf("%d\n", is98(b));
	printf("%d\n", is98(c));

	return (0);
}
