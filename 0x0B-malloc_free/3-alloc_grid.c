#include "main.h"
#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: The number of columns
 * @height: The number of rows
 * Return: Int 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * width);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		*(arr + i) = malloc(sizeof(int) * height);

		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
