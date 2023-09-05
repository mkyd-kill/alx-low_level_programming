#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the 2D memory allocated by alloc_grid
 * @grid: The 2D array
 * @height: The height of the 2D array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
