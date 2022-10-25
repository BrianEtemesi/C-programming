#include <stdio.h>

/**
 * main - accessing structure members
 * Return: 0
 */

int main(void)
{
	struct computer
	{
		float cost;
		int year;
		int cpu_speed;
		char cpu_type;
	} model;

	printf("The type of CPU inside your computer?\n");
	scanf("%c", &model.cpu_type);

	printf("The speed of your CPU?\n");
	scanf("%d", &model.cpu_speed);

	printf("The year your computer was made?\n");
	scanf("%d", &model.year);

	printf("How much you paid for the computer?\n");
	scanf("%f", &model.cost);

	printf("Here is what you have entered\n");

	printf("Year: %d\n", model.year);
	printf("Cost: Ksh%6.2f\n", model.cost);
	printf("CPU type: %c\n", model.cpu_type);
	printf("CPU speed: %dGhz\n", model.cpu_speed);

	return (0);
}
