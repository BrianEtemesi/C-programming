#include <stdio.h>
#include <stdlib.h>

/**
 * main - explore size and length of a string
 * Return: o
 */

int main(void)
{
	char s1[] = "Holberton";
	char s2[] = "Boy";
	int i, j;
	char *s;

	for (i = 0; s1[i]; i++)
	{
	}

	for (j = 0; s2[j]; j++)
	{
	}

	printf("the length of s1 is %d\n", i);
	printf("the size of s1 is %ld bytes\n", sizeof(s1));
	printf("the length of s2 is %d\n", j);
	printf("the size of s2 is %ld bytes\n", sizeof(s2));

	return (0);
}
