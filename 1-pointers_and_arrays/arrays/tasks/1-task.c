#include <stdio.h>

/**
 * main - print string in reverse
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "Holly father!";
	int len;
	int i;
	int rev;

	len = 0;

	for (i = 0; str[i]; i++)
	{
		len = len + 1;
	}

	printf("%d\n", len);

	rev = len - 1;

	for (i = rev; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return (0);
}
