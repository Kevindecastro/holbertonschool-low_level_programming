#include "main.h"
/**
 * factorial - fatorial of given number
 * @n: number to factorial
 * Return: return int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
