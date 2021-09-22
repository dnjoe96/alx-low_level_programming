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

	arr = (int **)malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		*(arr + i) = (int *)malloc(sizeof(int) * height);

		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
