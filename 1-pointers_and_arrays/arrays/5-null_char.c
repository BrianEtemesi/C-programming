#include <stdio.h>

/**
 * main - stopping at the null character
 *
 * Return: 0
 */

int main(void)
{
	char sent[] = {
			'C', ' ', 
			'i', 's', ' ', 
			'P', 'o', 'w', 'e', 'r', 
			'f', 'u', 'l', '!', '\0'
	};

	int i;

	/*getting the size of the array*/

	printf("the size of array sent[] is %ld bytes\n", sizeof(sent));

	/* sent[i] in logical test*/

	for (i = 0; sent[i]; i++)
	{
		printf("%c", sent[i]);
	}

	printf("\n");

	return (0);
}
