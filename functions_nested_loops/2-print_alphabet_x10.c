#include "main.h"

/**
* print_alphabet_x10 - Print if the Alphabet.
* Return: Always.
*/

void print_alphabet_x10(void)
{
int alphabet = 0;
char c;
while (alphabet < 10)
{
for (c = 'a'; c <= 'z' ; c++)
{
_putchar(c);
}
alphabet++;
_putchar('\n');
}
}
