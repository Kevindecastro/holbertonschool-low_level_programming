#include <limits.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Verify that the index is within the bounds of the bit width */
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	/* Create a mask with a 0 at the index and 1s everywhere else */
	mask = ~(1UL << index);
	/* Use bitwise AND to clear the bit at the given index */
	*n &= mask;

	return (1);
}
