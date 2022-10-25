#include <stdio.h>

/**
 * main - printing out an array of characters
 *
 * Return: 0
 */

int main(void)
{
	char word[7] = {'H', 'e', 'l', 'l', '0', '!', '\0'};
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("word[%d] contains %c \n", i, word[i]);
	}

	/* method 1*/

	printf("put all elements together (method 1): \n");

	for (i = 0; word[i] != '\0' && i < 7; i++)
	{
		printf("%c", word[i]);
	}

	/* method 2*/

	printf("\nprint all elements together (method 2):\n");

	printf("%s\n", word);

	return (0);
}
