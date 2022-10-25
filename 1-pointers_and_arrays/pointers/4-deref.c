#include <stdio.h>

/**
 * main - changing values via pointers
 *
 * Return: 0
 */

int main(void)
{
	char c;
	char *pt_c;

	c = 'A';
	printf("--char A has been declared into variable c\n");

	printf("c: address=%p, content=%c \n", &c, c);

	pt_c = &c;
	printf("--address of c (&c) saved to pointer pt_c\n");

	printf("pt_c: address=%p, content=%p \n", &pt_c, pt_c);
	printf("*pt_c: content= %c \n", *pt_c);

	*pt_c = 'B';
	printf("--char B now saved to pointer var *pt_c\n");

	printf("pt_c: address=%p, content=%p \n", &pt_c, pt_c);
	printf("*pt_c: content= %c \n", *pt_c);

	printf("--checking if values of c have changed\n");
	printf("c: address=%p, content=%c \n", &c, c);

	return (0);
}
