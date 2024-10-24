#include <stdio.h>

/**
* main - Print the number in first 0.
* Return: Always.
*/

int main(void)
{
char num = '0';
char alpha = 'a';
while (num <= '9')
{
putchar(num);
num++;
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
