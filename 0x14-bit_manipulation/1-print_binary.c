#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
void print_binary(unsigned long int n)
{
    unsigned long int count, i, count_Zero, aux_Num;

	count = 0;
	
	aux_Num = n;
	count_Zero = 1;

	while (aux_Num > 1)
	{
		aux_Num /= 2;
		count_Zero *= 2;
	}

	while (count_Zero >= 1)
	{
		i = ((n / count_Zero) % 2) + 48;
		putchar(i);
		count_Zero /= 2;
	}

}
