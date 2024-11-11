#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate memorory a grid of integer
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y, z, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			for (y = x; y >= 0; y--)
				free(ptr[y]);
			free(ptr);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (l = 0; l < width; l++)
			ptr[z][l] = 0;
	}

	return (ptr);
}
