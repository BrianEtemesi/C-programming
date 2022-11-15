#include <stdio.h>
#include <string.h>

/**
 * main - enty point / string tokenization
 * Return: 0
 */

int main(void)
{
	char string[] = "This new world,New world of tech";
	const char del[] = ",";
	char *mytoken;

	mytoken = strtok(string, del);
	while (mytoken != NULL)
	{
		printf("%s\n", mytoken);
		mytoken = strtok(NULL, del);
	}

	return (0);
}
