#include "main.h"
#include "holberton.h"
/**
 * reverse_array - a function that reverses the content of an array of integer
 *
 * @a: The array
 * @n: Length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int *start_p, *end_p;

	start_p = a;
	end_p = a;

	for (i = 0; i < n; i++)
		end_p = (a + i);

	for (i = 0; i <= n / 2; i++)
	{
		tmp = *start_p;
		*start_p = *end_p;
		*end_p = tmp;

		start_p++;
		end_p--;
	}
}
