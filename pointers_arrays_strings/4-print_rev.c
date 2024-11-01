#include "main.h"

/**
 * print_rev - Entry Function reverse a string
 * @s: strings reset The pointers
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int r = 0
		;
	while (s[r] != '\0')
	{
		r++;
	}
	for (r -= 1; r >= 0; r--)
	{
	_putchar(s[r]);
	}
	_putchar('\n');
}
