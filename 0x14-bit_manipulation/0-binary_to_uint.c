#include "main.h"

/**
 * _strlen - get length of a string
 *
 * @b: pointer to string
 * Return: Len of string
 */
unsigned int _strlen(const char *b)
{
	unsigned int i;

	for (i = 0; *(b + i); i++)
		;

	return (i);
}

/**
 * _pow - return the power of a number raised to another
 *
 * @x: Given number
 * @n: raised to power n
 * Return: Answer
 */
unsigned int _pow(unsigned int x, unsigned int n)
{
	unsigned int i, number;

	number = 1;

	for (i = 0; i < n; ++i)
		number *= x;

	return (number);
}

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, sum, bit;
	char bc;

	if (b == NULL)
		return (0);

	sum = 0;
	len = _strlen(b) - 1;

	for (i = 0; *(b + i); i++)
	{
		bc = *(b + i);

		if (bc == '0')
			bit = 0;
		else if (bc == '1')
			bit = 1;
		else
			return (0);

		sum += (bit * _pow(2, len - i));
	}

	return (sum);
}
