#include "main.h"
#include <string.h>

/**
 * _strlen - Entry Function
 * @s: reset The pointers
 * Return: returns nothing
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
