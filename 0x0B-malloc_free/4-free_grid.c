#include "main.h"

/**
 * free_grid - frees a 2D grid
 *
 * @grid: 2D array of integers
 * @height: represents like a column
 *
 * Return: freed 2D grid
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
		free(grid[height]);

	free(grid);
}
