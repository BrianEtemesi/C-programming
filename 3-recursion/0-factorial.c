#include "main.h"

/**
 * main - entry point
 * factorial - factor an integer
 * main - entry point
 * @n: given integer
 * Return: result
 */

int factorial(int n)
{
	int i;
	int res;

	i = 1;
	res = 1;

	while (i <= n)
	{
		res = res * i;
		i++;
	}

	return (res);
}

int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);

	return (0);
}
