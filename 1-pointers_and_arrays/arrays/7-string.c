#include <stdio.h>

/**
 * main - intializing strings
 *
 * Return: 0
 */

int main(void)
{
	char str1[] = {'A', 'S', 't', 'r', 'i', 'n', 'g', ' ', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
	char str2[] = "Another string constant";
	char *pt_str;
	int i;

	/*print out str1*/

	for (i = 0; str1[i]; i++)
	{
		printf("%c", str1[i]);
	}
	printf("\n");
	
	/*print out alternative str1*/

	printf("%s\n", str1);

	/*print out str2*/

	for (i = 0; str2[i]; i++)
	{
		printf("%c", str2[i]);
	}
	printf("\n");

	/*print out alternative str2*/

	printf("%s\n", str2);

	/*assign a string to a pointer*/

	pt_str = "Assign a string to a pointer";

	for (i = 0; *pt_str; i++)
	{
		printf("%c", *pt_str++);
	}
	printf("\n");

	return (0);
}
