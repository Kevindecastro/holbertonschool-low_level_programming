#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Entry Function reverse a string
 * @s: strings reset The pointers
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int r = 0;

	for (r = strlen(s) - 1; r >= '\0'; r--)
	{
	_putchar(s[r]);
	}
	_putchar('\n');
}
