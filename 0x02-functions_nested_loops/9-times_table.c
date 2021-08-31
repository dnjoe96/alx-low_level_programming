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

			if (p > 9)
			{
				i = p / 10;
				j = p % 10;

				_putchar('0' + i);
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + p);
			}

			if (p != 81)
			{
				_putchar(',');
				_putchar(' ');

				if (p <= 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
