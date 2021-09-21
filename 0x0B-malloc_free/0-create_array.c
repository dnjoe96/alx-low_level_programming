#include "main.h"
#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of array
 * @c: character input
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';
	return (ptr);
}
