#include "main.h"

/**
 * print_binary - Print binary numbers
 *
 * @n: Integar  numbers
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int count, i, aux_Num;

	aux_Num = n;
	count = 1;

	while (aux_Num > 1)
	{
		aux_Num /= 2;
		count *= 2;
	}

	while (count >= 1)
	{
		i = ((n / count) % 2) + 48;
		_putchar(i);
		count /= 2;
	}

}
