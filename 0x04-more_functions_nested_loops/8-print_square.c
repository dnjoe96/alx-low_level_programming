#include "main.h"
#include "holberton.h"
/**
 * print_square - print square
 *
 * @n: dimension of square
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
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
