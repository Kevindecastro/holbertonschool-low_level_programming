#include "main.h"

/**
 * print_line - where print n is the number of times the character _
 * @n: number stock
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)

	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
