#include <stdio.h>
#include <stdlib.h>

/**
 * main - initializing singly linked lists
 * Return: 0
 */

/* define the structure */
struct node
{
	int data;
	struct node *next;
};

/**
 * printlinkedlist - prints out data in linked lists
 * @p: pointer to list Head
 */

void printlinkedlist(struct node *p)
{
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}

/**
 * main - Entry point, initializing linked lists
 * Return: 0
 */

int main(void)
{
	
	/* initialize nodes */
	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;

	/* allocate memory */
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	/* assign data values */
	one->data = 1;
	two->data = 2;
	three->data = 3;

	/* connect nodes */
	one->next = two;
	two->next = three;
	three->next = NULL;

	/* save address of the first node in head */

	head = one;

	printlinkedlist(head);

	return (0);
}
