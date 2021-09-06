#include "main.h"
#include "holberton.h"
/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
