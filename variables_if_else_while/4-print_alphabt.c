#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the Alphabet in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet;
for (alphabet  = 'a' ; alphabet <= 'z' ; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
