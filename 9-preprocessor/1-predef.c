#include <stdio.h>

/**
 * main - print out predefined macros in C
 * Return: 0
 */

int main(void)
{
	printf("Date : %s\n", __DATE__);
	printf("File : %s\n", __FILE__);
	printf("Time : %s\n", __TIME__);
	printf("Line : %d\n", __LINE__);
	printf("ANSI : %d\n", __STDC__);

	return (0);
}
