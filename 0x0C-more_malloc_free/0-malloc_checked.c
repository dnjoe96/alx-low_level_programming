#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: size of the memory to allocate.
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
