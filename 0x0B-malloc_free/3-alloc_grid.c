#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - make a 2 dimensional array of integers.
 * @width: represents column of array
 * @height: represents row of the array
 *
 * Return: pointer to the 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(height * sizeof(*grid));

	if (height < 1 || width < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
