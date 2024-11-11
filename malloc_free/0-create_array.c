#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: unsigned int for size
 * @c: char initialize
 * Return: Null if size 0, else return size
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size);
	if (size == 0)
		return (NULL);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
