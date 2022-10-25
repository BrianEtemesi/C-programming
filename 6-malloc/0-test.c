#include <stdio.h>
#include <string.h>

/**
 * main - test sizeof() function on an initialized string
 * Return: 0
 */

int main(void)
{
	char str[] = "my president is black";

	printf("the size of str is %ld bytes\n", sizeof(str));
	printf("the length of str is %ld characters\n", strlen(str));

	return (0);
}
