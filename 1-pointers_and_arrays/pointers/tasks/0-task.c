#include <stdio.h>

/**
 * main - Given that x=5 and y=6, write a program
 *   to calculate the multiplication of the two
 *   integers and print out the result, which
 *   is saved in x, all in the way of
 *   indirection (that is, using pointers).
 *
 * Return: 0
 */

int main(void)
{
	int x, y, prod, *pt_x;

	x = 5;
	y = 6;

	prod = x * y;

	printf("x: address=%p, content=%d \n", &x, x);
	printf("prod: address=%p, content=%d \n", &prod, prod);

	pt_x = &x;
	*pt_x = prod;
	printf("--pointer pt_x assigned address of x\n");
	printf("--var pointer *pt_x assigned prod(x*y)\n");

	printf("pt_x: content=%p \n", pt_x);
	printf("x: address=%p, content=%d \n", &x, x);

	return (0);

}
