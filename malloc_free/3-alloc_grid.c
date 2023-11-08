#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - check the code
 *
 * @width: var
 * @height: var
 *
 * Return: Always 0.
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
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);

}
