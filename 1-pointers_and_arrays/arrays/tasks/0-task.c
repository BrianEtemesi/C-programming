#include <stdio.h>

/**
 * main - use a for loop to initialize the character
 *  array with ‘a’, ‘b’, ‘c’, ‘d’, and ‘e’, and
 *   then print out the value of each element in the array.
 *
 * Return: 0
 */

int main(void)
{
	char arr[5];
	int i;
	char j;

	j = 'a';

	for (i = 0; i < 5; i++)
	{
		arr[i] = j;
		j++;
	}

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %c ", i, arr[i]);
		printf("\n");
	}
	return (0);
}
