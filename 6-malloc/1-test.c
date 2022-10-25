#include <stdio.h>

/**
 * main - explore string literals
 * Return: 0
 */

int main(void)
{
	char *pstr;

	printf("the value of pstr is %s\n", pstr);
	printf("the address of ptsr is %p\n", &pstr);
	printf("the address of *pstr is %p\n", &*pstr);

	pstr = "baddest";

	printf("pstr initialized to 'baddest'\n");

	printf("the value of pstr is %s\n", pstr);
	printf("the address of ptsr is %p\n", &pstr);
	printf("the address of *pstr is %p\n", &*pstr);
	printf("the address of pstr[0] is %p\n", &pstr[0]);

	return (0);
}
