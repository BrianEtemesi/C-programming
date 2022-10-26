#ifndef LIST_H
#define LIST_H

/**
 * struct my_cars
 * @make: car make
 * @year: year of manufucture
 */

typedef struct mycars
{
	char *model;
	int year;
	struct mycars *next;
} my_cars;

my_cars *add_node(my_cars *h, char *nmodel, int year);

#endif /* LIST_H */
