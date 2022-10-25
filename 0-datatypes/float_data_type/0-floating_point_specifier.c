#include <stdio.h>

/**
 * main - prints out different values from different identifiers
 *
 * Description - differenciates the integer format specifier and the
 *	floating point format specifier.
 * Return: 0
 */

int main(void)
{
	int num1, num2, num3;
	float fnum1, fnum2, fnum3;

	num1 = 32 / 10;
	fnum1 = 32 / 10;
	num2 = 32.0 / 10;
	fnum2 = 32.0 / 10;
	num3 = 32 / 10.0;
	fnum3 = 32 / 10.0;

	printf("The integer divis. of 32/10 is: %d\n", num1);
	printf("The floating point divis. of 32/10 is: %f\n", fnum1);
	printf("The integer divis. of 32.0/10 is: %d\n", num2);
	printf("The floating point divis. of 32.0/10 is: %f\n", fnum2);
	printf("The integer divis. of 32/10.0 is: %d\n", num3);
	printf("The floating point divis. of 32/10.0 is: %f\n", fnum3);

	return (0);
}
