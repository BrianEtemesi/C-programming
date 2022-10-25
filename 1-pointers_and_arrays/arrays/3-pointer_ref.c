#include <stdio.h>

/**
 * main - referencing an array witha a pointer
 *
 * Return: 0
 *
 */

int main(void)
{
	int *pt;
	int list[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		list[i] = i + 1;
	}

	pt = list;
	printf("the start address of the array is %p \n", pt);
	printf("the start address of the array is %p \n", &(list[0]));
	printf("the start address of the array is %p \n", &list);
	printf("the value of the 1st element is %d \n", *pt);
	printf("the value of the 1st element is %d \n", list[0]);

	pt = &list[0];
	printf("the address of the 1st element is %p \n", pt);
	printf("the value of the 1st element is %d \n", *pt);

	return (0);


}
