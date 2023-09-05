#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: Array width
 * @height: Array height
 * Return: Pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	/*If width and height are < 1, return null*/
	if (width < 1 || height < 1)
		return (NULL);

	/*2D memory allocation*/
	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		/*Freeing up the array*/
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		/*memory allocation to array[i]*/
		array[i] = malloc(width * sizeof(int));
		/*freeing up memory*/
		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	/*Assigning 0 to the 2D array*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < widht; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
