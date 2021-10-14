#include "main.h"

/**
 * set_bit - set value to 1 with given index
 *
 * @n: pointer to unsigned int
 * @index: index
 * Return: 1 if succes -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	a = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	a = 1 << index;
	*n |= a;
	return (1);
}
