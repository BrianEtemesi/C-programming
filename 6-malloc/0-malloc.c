#include <stdlib.h>
#include <stdio.h>

/**
 * strcopy - copy string
 * @str1: pointer to source
 * @str2: pointer to destination
 */

void strcopy(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i]; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char str[] = "use malloc () to allocate memory";
	char *pstr;
	int res;

	pstr = malloc(sizeof(str));
	if (pstr != NULL)
	{
		strcopy(str, pstr);
		printf("the string pointed to by pstr is:\n%s\n", pstr);
		res = 0;
	}
	else
	{
		printf("malloc() function failed\n");
		res = 1;
	}

	return (res);
}
