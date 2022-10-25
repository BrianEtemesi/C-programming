#include <stdio.h>

/**
 * main - reverse a string
 *
 * Return: 0
 */

int main(void)
{
	char s[] = "blue";
	int i;
	int len;
	int j;

	len = 0;
	j = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	printf("length of the string is %d\n", len);
	printf("the last character of the string is %c\n", s[len - 1]);

	len = len - 1;

	for (i = len; i >= 0; i--)
	{
		s[j] = s[i];
		j++;
	}

	printf("%c\n", s[0]);
	printf("%c\n", s[1]);
	printf("%c\n", s[2]);
	printf("%c\n", s[3]);

	return (0);
}
