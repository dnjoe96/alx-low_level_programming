#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - A function to initialise the struct dog
 *
 * @d: object name
 * @name:  name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return:  void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
