#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 *
 * @min: Min value
 * @max: Max value
 * Return: Pointer to integar array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	for (i = min; i <= max; i++)
	{
		*(ptr + (i - min)) = i;
	}

	return (ptr);
}
