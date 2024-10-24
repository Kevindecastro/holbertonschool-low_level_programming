#include <stdio.h>

/**
* main - Print if the Alphabet.
* Return: Always.
*/

int main(void)
{
char alphabet;
for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
