#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: int to check
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);/*allocates memory*/

	if (ptr == NULL)/*if malloc fails*/
		exit(98);/*process termination with a status value of 98*/

	return (ptr);/*Returns a pointer to the allocated memory*/
}
