#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_last_digit - Entry Function
* @n: number aleatoire
* Print "_putchar in newline"
* Return: 0.
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
