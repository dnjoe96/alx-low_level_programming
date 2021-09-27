#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A general dog struct
 *
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Description - A dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef HEADER_H
#define HEADER_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

