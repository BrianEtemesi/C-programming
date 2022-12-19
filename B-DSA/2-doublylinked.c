#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;	
};

/* Global variable - pointer to head */
struct node *head;

/**
 * getNewNode - creates new node
 * @x: data value
 * Return: pointer to node
 */

struct node *getNewNode(int x)
{
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

/**
 * insertAtHead - function to insert node at head
 * @x: data value
 */

void insertAtHead(int x)
{
	struct node * newNode = getNewNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

/**
 * print - prints list
 */

void print()
{
	struct node *temp = head;
	printf("Forward: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

/**
 * reversePrint - prints linked list in reverse
 */

void reversePrint()
{
	struct node *temp = head;
	if (temp == NULL)
		return;
	/* go to the last Node using next pointer */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Traverse backwards using prev pointer*/
	printf("Reverse: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: 0
 */

int main()
{
	int i;

	head = NULL; /* empty list */

	for (i = 1; i < 5; i++)
	{
		insertAtHead(i);
		print();
		reversePrint();
	}

	return (0);
}







































