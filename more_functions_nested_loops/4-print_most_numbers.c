#include "main.h"

/*
 * print_most_numbers - Print the Alphabet and ignore 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int num = 0;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
