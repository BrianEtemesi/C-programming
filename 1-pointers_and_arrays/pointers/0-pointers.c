#include <stdio.h>

/**
 * main - declaring and assigning values to pointers
 *
 *
 * Return: 0
 */

int main(void)
{
	char c, *pt_c;
	int x, *pt_x;
	float y, *pt_y;

	c = 'A';
	x = 8;
	y = 111.99;


	printf("c: address= %p, content= %c\n", &c, c);
	printf("x: address= %p, content= %d\n", &x, x);
	printf("y: address= %p, content= %5.2f\n", &y, y);

	pt_c = &c;
		printf("pt_c: address= %p, content= %p\n", &pt_c, pt_c);
		printf("*pt_c => %c\n", *pt_c);

	pt_x = &x;
		printf("pt_x: address= %p, content= %p\n", &pt_x, pt_x);
		printf("*pt_x => %d\n", *pt_x);

	pt_y = &y;
		printf("pt_y: address= %p, content= %p\n", &pt_y, pt_y);
		printf("*pt_y => %5.2f\n", *pt_y);

	return (0);
}
