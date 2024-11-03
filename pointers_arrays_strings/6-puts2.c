#include "main.h"

/**
 * puts2 - Entry Function
 * @str: reset The pointers
 * Return: returns nothing
 */

void puts2(char *str)
{
	int len, a;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
