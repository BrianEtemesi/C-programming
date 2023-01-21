#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _push - pushes node to stack
 *
 * @x: data to be stored in new node
 *
 */

void _push(int x)
{
	stack_t *newnode;

	/* create new node and assign value/data */
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		printf("malloc failed\n");

	newnode->n = x;

	/* check if stack is empty or not */
	if (top == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = top;
		top->prev = newnode;
	}

	newnode->prev = NULL;
	top = newnode;

}

/**
 * _pall - prints contents of a stack
 *
 */

void _pall(void)
{
	stack_t *temp = top;

	if (top == NULL)
	{
		printf("Stack is empty\n");
		exit(1);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * main - entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	_push(10);
	_push(20);
	_push(30);
	_pall();

	return (0);
}
