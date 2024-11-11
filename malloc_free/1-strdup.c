#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - copy a string with new allocate memory
 * @str: pointer to a string
 * Return: Null if str = Null else return pointer to str
 */

char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *dup;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	ptr = malloc(size + 1);

	if (ptr == NULL)
		return (NULL);

	dup = ptr;
	while (*str)
		*dup++ = *str++;

	*dup = '\0';

	return (ptr);
}
