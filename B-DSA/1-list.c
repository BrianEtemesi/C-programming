#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *
 */

my_cars *add_node(my_cars **h, char *nmodel, int year)
{
	my_cars *newcar;

	newcar = malloc(sizeof(my_cars));
	newcar->model = nmodel;
	newcar->year = year;
	newcar->next = *h;
	*h = newcar;

	return (*h);
}
/**
 * printcars - prints out elements in list my_cars
 * @h: pointer to header
 */

void printcars(my_cars *h)
{
	char *str;
	
	while (h != NULL)
	{
		str = strdup(h->model);
		printf("%d %s\n", h->year, str);

		h = h->next;
	}
}

/**
 * main - initialize struct
 * Return: 0
 */

int main(void)
{
	/* initialize nodes */
	my_cars *head;
	my_cars *car1 = NULL;
	my_cars *car2 = NULL;
	my_cars *car3 = NULL;

	/* allocate memory */
	car1 = malloc(sizeof(my_cars));
	car2 = malloc(sizeof(my_cars));
	car3 = malloc(sizeof(my_cars));

	/* assign data values */
	car1->model = "VW golf";
	car1->year = 2012;
	car2->model = "Toyota Crown";
	car2->year = 2014;
	car3->model = "Nissan Fuga";
	car3->year = 2015;

	/* link nodes */
	car1->next = car2;
	car2->next = car3;
	car3->next = NULL;

	/* save address of the first node to head */
	head = car1;

	/* print elements from printcars func */
	//printcars(head);

	/* add node using add_node function */
	add_node(&head, "Toyota Prado", 2019);
	add_node(&head, "BMW 532i", 2016);

	printcars(head);

	/* alternatively traverse and print
	my_cars *temp = head;

	while (temp != NULL)
	{
		printf("%d %s-->", temp->year, temp->model);
		temp = temp->next;
	}

	printf("\n"); */

	return (0);
}
