#include "main.h"
#include "holberton.h"
/**
 * print_triangle - print n dimension triangle
 *
 * @n: number of lines
 * Return: void
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= n - i; k++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
