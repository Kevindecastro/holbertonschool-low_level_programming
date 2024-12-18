#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a newline
 * @separator: string to separate each number when printed
 * @n: number of input integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i;

	va_start(vaList, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vaList, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vaList);
}
