#include <stdio.h>

/**
 * main - gets size of an array
 *
 *
 * Return: 0
 */

int main(void)
{
	int list[10];
	int total_size;

	total_size = sizeof(int) * 10;

	printf("The size of int is %ld bytes long\n", sizeof(int));
	printf("The array of 10 ints has a total of %d bytes\n", total_size);
	printf("the size of list[10] is %ld bytes \n", sizeof(list));
	printf("the address of list[0] is %p\n", &list[0]);
	printf("the address of list[9] is %p\n", &list[9]);

	return (0);
}
