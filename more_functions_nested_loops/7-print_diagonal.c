#include "main.h"

/**
 * print_diagonal -  draws a diagonal line
 * @n: number of times the character "\" should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	char a;
	char b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
