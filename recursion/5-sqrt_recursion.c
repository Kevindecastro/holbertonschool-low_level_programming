#include "main.h"
/**
 * _sqrt - check sqrt of number
 * @n: int
 * @src: int source
 * Return: integer
 */
int _sqrt(int n, int src)
{
	if (n * n == src)
		return (n);
	if (n * n > src)
		return (-1);

	return (_sqrt(n + 1, src));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
