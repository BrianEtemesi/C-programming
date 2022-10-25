#include <stdio.h>

/**
 * struct buddy - ALX group members
 * @name: name
 * @email: email
 * @age: age
 * Description: Buddy group members
 */

struct buddy
{
	char *name;
	char *email;
	int age;
};

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	struct buddy Brian;

	Brian.name = "Brian Etemesi";
	Brian.email = "etemecci@gmail.com";
	Brian.age = 34;

	printf("Brian's full name is %s\n", Brian.name);

	return (0);
}
