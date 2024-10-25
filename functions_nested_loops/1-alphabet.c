#include "main.h"

/**
  * print_alphabet - Make the alphabet
  * Print "_putchar in newline"
  * Return: 0
  */

void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	_putchar('\n');
	}
}
