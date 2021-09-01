#include "main.h"
#include <stdio.h>
/**
 * main - cumputes sum of all multiples of 3 and 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	int i;
	int total;

	total = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
	}
	printf("%d\n", total);

	return (0);
}
