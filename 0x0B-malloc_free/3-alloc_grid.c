#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-d array of
 *               integers with each element initalized to 0
 * @width: width of the 2-d array
 * @height: height of the 2-d array
 *
 * Return: If width <= 0, height <= 0, or function fails - NULL
 *         Else pointer to the 2-d array of integers
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
