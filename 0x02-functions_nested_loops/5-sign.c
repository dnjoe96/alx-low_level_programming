#include "main.h"

/**
 * print_sign - checks for signs
 * @n: the input to be checked to be checked
 *
 * Return: 1 if +, 0 if sign is 0, and -1 if sign is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
