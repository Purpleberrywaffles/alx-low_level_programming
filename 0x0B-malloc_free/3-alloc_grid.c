#include "main.h"

/**
 * alloc_grid - pointer to a pointer to function that returns a 2D array
 *
 * @width: represents rows
 * @height: represents columns
 *
 * Return: pointer to a 2D arrya of integers
 */
int **alloc_grid(int width, int height)
{
	int t = 0, q;
	int **grid; /* prints a 2D array */

	grid = malloc(height*sizeof(int*));

	for (; t < height; t++)
		grid[height] = malloc(width*sizeof(int));

	for (t = 0; t < height; t++)
	{
		for (q = 0; q < width; q++)
		{
			if (!(width <= 0) || !(height <= 0))
			{
				_putchar('0');
				_putchar(' ');
			}

				else
					return (NULL);
		}
		printf("\n");
	}
	return (grid);
	free (grid);
}
