#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array (grid) of integers and initializes it to 0
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the 2D array, or NULL if memory allocation fails
 *         or if width/height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{

int i, j;
int **grid;


if (width <= 0 || height <= 0)
	return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	grid[i] = (int *)malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
}
return (grid);
}
