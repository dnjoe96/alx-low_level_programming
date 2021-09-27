#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints dog elements
 *
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
