#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - Prints the absolute numbers.
 * @n: The number of which the sign will be printed.
 * Return: 0 absolute
 *	   -1 not absolute
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
return (-n);
}
