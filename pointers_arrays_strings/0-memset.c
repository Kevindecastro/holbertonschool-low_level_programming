#include "main.h"

/**
 * _memset - change memory with constant byte
 * @s: pointer string
 * @b: constant byte
 * @n: n bytes of memory pointed
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
