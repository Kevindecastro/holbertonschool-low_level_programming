#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - freed a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: an array free
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
