#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the input to be checked
 *
 * Return: absolute value
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	_putchar('0' + last);
	return (last);
}
