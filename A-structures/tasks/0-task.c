#include <stdio.h>
#include <stdlib.h>

/**
 * struct class - class of students
 * @name: name
 * @email: email
 * @age: age
 */

struct class
{
	char *name;
	char *email;
	int age;
};

struct class *new_student(char *name, char *email, int age)
{
	struct class *student;

	student = malloc(sizeof(struct class));
	if (student == NULL)
		return (NULL);

	student->name = name;
	student->email = email;
	student->age = age;

	return (student);
}

int main(void)
{
	struct class *student;

	student = new_student("Travis", "travis@mail.io", 23);
	if (student == NULL)
		return (1);

	printf("New student is %s\n", student->name);
	printf("His email is %s\n", student->email);
	printf("and he is %d years old\n", student->age);

	return (0);
}
