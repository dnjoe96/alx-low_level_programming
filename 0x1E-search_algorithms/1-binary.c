#include "search_algos.h"

/**
 * print_array - function to print arrays
 *
 * @array: the pointer to the first item in the array
 * @size: the size of the array
 * Return: void
 */
void print_array(int *array, size_t size)
{
	size_t n;

	printf("Searching in array: ");

	for (n = 0; n < size; n++)
	{
		if (n == 0)
			printf("%d", *(array + n));
		else
			printf(", %d", *(array + n));
	}
	printf("\n");
}


/**
 * binary_search - Searches an array with binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value we are searching for
 * Return: First index where the value is found, or -1 if null or not found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	mid = size / 2;

	print_array(array, size);

	if (value == *(array + mid))
		return (mid);

	if (value > *(array + mid))
	{
		return (binary_search((array + mid + 1), size - (mid + 1), value));
		/*
		 * if (binary_search((array + mid + 1), size - (mid + 1), value) != -1)
		 *	return mid + (binary_search((array + mid + 1), size - (mid + 1), value));
		 * else
		 *	return (-1);
		 */
	}
	else
		return (binary_search(array, size - mid, value));
}
