#include <stdio.h>

/**
 * main - obtains the address of variables given
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;
	int x;
	float y;

	printf("c: address= %p,content= %c\n", &c, c);
	printf("x: address= %p,content= %d\n", &x, x);
	printf("y: address= %p,content= %5.2f\n", &y, y);

	c = 'A';
	x = 8;
	y = 999.12;

	printf("c: address= %p,content= %c\n", &c, c);
	printf("x: address= %p,content= %d\n", &x, x);
	printf("y: address= %p,content= %5.2f\n", &y, y);

	return (0);


}
