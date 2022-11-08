#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a matrix
 * @grid: the 2d array
 * @height: the height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
