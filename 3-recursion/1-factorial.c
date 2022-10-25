#include "main.h"

/**
 * factorial - factor an integer
 * @n: given integer
 *
 * Return: result
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

int main(void)
{
	int f;
	int k;

	f = factorial(5);
	k = factorial(6);

	printf("5! = %d\n", f);
	printf("6! = %d\n", k);

	return (0);
}
