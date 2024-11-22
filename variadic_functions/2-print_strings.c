#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints input strings followed by new line
 * @separator: string to separate each printed string
 * @n: number of input strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	char *temp;
	unsigned int i;

	va_start(vaList, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(vaList, char *);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vaList);
}
