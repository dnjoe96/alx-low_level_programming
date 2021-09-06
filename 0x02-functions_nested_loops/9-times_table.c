#include "main.h"

/**
 * times_table - 9x9 table
 *
 * Return: void
 */
void times_table(void)
{
	int p, i, j;
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = n * m;

			if (m == 0)
			{
				_putchar('0' + p);
			}
			else if (p > 9 && m != 0)
			{
				i = p / 10;
				j = p % 10;

				_putchar(',');
				_putchar(' ');
				_putchar('0' + i);
				_putchar('0' + j);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
		}
		_putchar('\n');
	}
}
