#include <stdio.h>

/**
 * main - concatenates two strings
 *
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	
}

int main(void)
{
	char str1[100] = "Hello";
	char str2[] = "boy";
	int i, j, k;

	for (i = 0; str1[i]; i++)
	{
	}

	printf("Length of str1 using str1[i] is %d\n", i);

	for (j = 0; str1[j] != '\0'; j++)
	{
	}

	printf("Length of str1 using str1[i]!='\\0' is %d\n", j);

	//str1[0] = 'A';
	//str1[i] = '!';
	//str1[i + 1] = '\0';

	printf("%s\n", str1);

	for (k = 0; str2[k]; k++)
	{
	}

	printf("length of str2 is %d\n", k);

	str1[i] = ' ';

	for (k = 0; str2[k]; k++)
	{
		str1[i + 1] = str2[k];
		i++;
	}

	//str1[10] = '\0';

	printf("str1 = %s\n", str1);

	return (0);
}
