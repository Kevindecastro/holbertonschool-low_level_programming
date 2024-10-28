#include "main.h"

/**
 * print_numbers - Entry Function
 * _putchar - writes the character num  to stdout
 * Return: 0 (Always)
 */

void print_numbers(void)
{
	int num = 0;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
