#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string source to occurate
 * @needle: string to find in string source
 * Return: string find
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *ptr = needle;

		while (*p == *ptr && *ptr != '\0')
		{
			p++;
			ptr++;
		}
		if (*ptr == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
