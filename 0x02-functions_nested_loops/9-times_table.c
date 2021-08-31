#include "main.h"

/**
 * times_table - 9x9 table
 *
 * Return: void
 */
void times_table(void)
{
	int p, i, j;

	for (int n = 0; n <= 9; n++)
	{
		for (int m = 0; m <= 9; m++)
		{
			p = n * m;

			if (p > 9)
			{
				i = p / 10;
				j = p % 10;

				putchar('0' + i);
				putchar('0' + j);
			}
			else
			{
				putchar('0' + p);
			}

			if (p != 81)
			{
				putchar(',');
				putchar(' ');

				if (p <= 9)
					putchar(' ');
			}
		}
		putchar('\n');
	}
}
