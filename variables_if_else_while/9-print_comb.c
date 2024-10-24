#include <stdio.h>

/**
* main - Print the number in first 0.
* Return: Always.
*/

int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');
if (number < 10)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
