#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strcopy - copys a string to another location
 * @str1: source string
 * @str2: destination
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
 * main - reallocate memory using realloc()
 * Return: 0
 */

int main(void)
{
	char *str[4] = {
			"The people",
			"United",
			"shall never",
			"be defeated!\n"
	};

	char *ptr;
	int i;
	int termination = 0;

	ptr = malloc(sizeof(char) * (strlen(str[0]) + 1));

	if (ptr == NULL)
		termination = 1;

	strcopy(str[0], ptr);
	printf("%s\n", ptr);

	for (i = 1; i < 4; i++)
	{
		ptr = realloc(ptr, (sizeof(char) * (strlen(str[i]) + 1)));
		if (ptr == NULL)
			termination = 0;
		strcopy(str[i], ptr);
		printf("%s\n", ptr);
	}
	return (termination);
}
