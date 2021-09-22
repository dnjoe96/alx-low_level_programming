#include "main.h"
#include "holberton.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by the alloc_grid function
 *
 * @grid: A 2D array
 * @height: The length of the Row
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
