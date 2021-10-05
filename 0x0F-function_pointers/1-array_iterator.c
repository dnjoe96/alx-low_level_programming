#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - excute a function on elements of an array
 *
 * @array: array
 * @size: size of array
 * @action: function to be excuted
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
