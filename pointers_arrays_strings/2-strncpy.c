#include "main.h"
/**
 * _strncpy - copy a string with n bytes
 * @dest: string destination
 * @src: string source to copy
 * @n: n bytes
 * Return: *char te string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
