#include <stdio.h>

/**
 * add_integers - adds two integers
 *
 * Return: result of adding the two integers
 *
 * main - prints the sum of 2 numbers
 *
 * Return: 0
 */

int add_integers(int x, int y)
	{
		int result;
		result= x+y;
		return(result);
	}

int main(void)
	{
	int sum;
	sum = add_integers(10,4);
	printf("The sum of 10 and 4 is %d.\n", sum);
	return(0);

	}
