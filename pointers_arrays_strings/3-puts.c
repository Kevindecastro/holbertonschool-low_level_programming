#include "main.h"
/**
 * _puts - Entry Function
 * @str: reset The pointers
 * Return: returns nothing
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
