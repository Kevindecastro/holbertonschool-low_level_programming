#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create an array of integer
 * @min: min of array
 * @max: maximum of the range
 *
 * Return: return an array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min) + sizeof(int)));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
		ptr[i++] = min++;

	return (ptr);
}
