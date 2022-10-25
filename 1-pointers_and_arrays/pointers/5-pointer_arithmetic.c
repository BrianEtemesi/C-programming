#include <stdio.h>

/**
 * main - iterating pointer addresses
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char ch;
	int *pnum;
	char *pch;

	num = 10;
	pnum = &num;
	pch = &ch;

	printf("Address of num is %p\n", &num);
	printf("the value of num is %d\n", num);
	printf("Address at pnum is %p\n", pnum);
	printf("Address at pnum + 1 is %p\n", pnum + 1);
	printf("Value at pnum is %d\n", *pnum);
	printf("Value at pnum + 1 is %d\n", *(pnum + 1));

	return (0);


}
