#include <stdio.h>

/**
 * main - dereferencing pointers
 *
 * Return: 0
 */

int main(void)
{
	int i, *pi;

	i = 10;
	pi = &i;

	printf("value of i=%d \n", i);
	printf("address of i=%p \n", &i);
	printf("value of pi=%p \n", pi);
	printf("address of pi=%p \n", &pi);

	*pi = 77;

	printf("value of i=%d \n", i);
	printf("address of pi=%p \n", &pi);

	return (0);


}
