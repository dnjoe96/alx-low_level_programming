#include "main.h"

/**
 * print_to_98 - print time from a given number to 98
 *
 * @n: The given number
 * Return: void
 */
void print_to_98(int n)
{
	int a, i, j;

	for (a = n; a <= 98; a++)
	{
		if (a > 9)
		{
			i = a / 10;
			j = a % 10;

			_putchar('0' + i);
			_putchar('0' + j);
		}
		else
		{
			i = a;
			_putchar('0' + i);
		}

		if (i != 9 || j != 8)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
