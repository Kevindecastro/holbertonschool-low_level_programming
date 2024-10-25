#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int alpha = 0;
	char c;
	while (alpha < 10)
	{
	for (c = 'a'; c <= 'z' ; c++)
	{
	_putchar(c);
	}
	alpha++;
	_putchar('\n');
	}
}
