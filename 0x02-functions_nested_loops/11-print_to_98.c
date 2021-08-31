#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print time from a given number to 98
 *
 * @n: The given number
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
			{
				printf("%d\n");
			}
		}
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
			{
				printf("%d\n");
			}
		}
	}
}
