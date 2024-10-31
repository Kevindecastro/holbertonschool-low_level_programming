#include "main.h"

/**
 * swap_int - Entry Function
 * @a: change the pointers
 * @b: reset The pointers
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
