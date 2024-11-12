#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenation of two string
 * @s1: first string
 * @s2: second string
 * Return: Pointer with space or null if it's an ampty string
 */

char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0, size_s2 = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size_s1])
		size_s1++;

	while (s2[size_s2])
		size_s2++;

	ptr = malloc((size_s1 + size_s2) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < (size_s1 + size_s2))
	{
		if (i <= size_s1)
			ptr[i] = s1[i];
		if (i >= size_s1)
			ptr[i] = *s2++;

		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
