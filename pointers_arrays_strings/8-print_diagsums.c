#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal
 * @a: input
 * @size: size of
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, som1 = 0, som2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		som1 += a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		som2 += a[j];

	printf("%d, %d\n", som1, som2);
}
