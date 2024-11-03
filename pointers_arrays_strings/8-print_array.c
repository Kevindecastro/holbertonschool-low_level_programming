#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array
 * @a: integer, array
 * @n: integer number of index
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
}
