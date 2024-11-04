#include "main.h"
#include "2-strchr.c"
/**
 * _strpbrk - searches a string for any of sat of bytes
 * @s: string sources
 * @accept: string dest
 * Return: s if match with bytes of accept, else return null
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	if (*s == '\0' || *accept == '\0')
		return (0);

	while (*p)
	{
		if (_strchr(accept, *p))
			return (p);
		p++;
	}

	return (0);
}
