#include "main.h"

/**
 * jack_bauer - print time from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a == 2 && b == 4)
				return;
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(':');
					putchar('0' + c);
					putchar('0' + d);
					putchar('\n');
				}
			}
		}
	}
}
