#include "search_algos.h"

/**
 * linear_search - Searches an array with linear search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value we are searching for
 * Return: First index where the value is found, or -1 if null or not found
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);

	while (size - index > 0)
	{
		printf("Value checked array[%d] = [%d]\n", index, *(array + index));
		if (*(array + index) == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
