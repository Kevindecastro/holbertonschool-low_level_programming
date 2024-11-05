#include "main.h"
/**
 * check_prime - check if its prime
 * @n: source number
 * @i: int
 * Return: int
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 2));
}
/**
 * is_prime_number - print 1 if its prime number
 * @n: integer source
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (0);

	return (check_prime(n, 3));
}
