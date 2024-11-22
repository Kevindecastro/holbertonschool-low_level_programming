#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: interger to number of arguments
 * Return: Sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list vaList;

	if (n == 0)
		return (0);

	va_start(vaList, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vaList, int);

	va_end(vaList);

	return (sum);
}
