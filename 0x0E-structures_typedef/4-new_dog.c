#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dogt
 * Return: Pointer to struct of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/**if (dog->name == NULL || dog->age == NULL || dog->owner == NULL)
		return (NULL);
	*/

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
