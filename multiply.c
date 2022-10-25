#include<stdio.h>

/**
 * mul_integers - Multiplies 2 integers
 *
 * Returns: Product after multiplication of 2 integers
 *
 * main - Prints the product of multiplying two integers
 *
 * Returns: 
 */

int mul_integers (int a, int b)
	{
	int result;
	result = a*b;
	return(result);
	}

int main(void)
	{
	int product;
	product = mul_integers(7,30);
	printf("The product of 7 and 30 is: %d\n",product);
	return(0);
	}
