#include "main.h"
#include <stdio.h>

/**
 * _strncat - cat 2 string with n param
 * @dest: string destinataire
 * @src: string source
 * @n: n bytes
 * Return: dest with cat src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
