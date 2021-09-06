#include "main.h"
#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by
 * a new line
 *
 * @a: The input array
 * @n: The number of outputs
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		printf(", %d", a[i]);
	}
	printf("\n");
}
