#include "main.h"

/**
 * get_bit - gets bit value at index
 *
 * @n: number to check
 * @index:index bit to check
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	return (bit);
}
