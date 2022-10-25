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

#endif /* LIST_H */
