#include <stdio.h>

/**
 * main - explore elements and pointers in an array
 *
 *
 * Return: 0
 */

int main(void)
{
	int list[] = {2, 7, 8, 9, 5, 1};

	printf("value of list is %p\n", list);
	printf("Address of list is %p\n", &list);
	printf("Address of list[0] is %p\n", &list[0]);
	printf("Value of list[0] is %d\n", list[0]);
	printf("Value of *list is %d\n", *list);


	return (0);
}
