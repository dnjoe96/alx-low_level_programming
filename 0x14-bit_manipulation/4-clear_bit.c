#include "main.h"

/**
 * clear_bit - set value of bit at a given index
 *
 * @n: pointer to number to set
 * @index:index bit to check
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
