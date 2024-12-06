#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;
	/* XOR the two numbers to identify differing bits */
	xor_result = n ^ m;
	/* Count the number of 1s in the XOR result */
	while (xor_result)
	{
		count += xor_result & 1; /* Increment count if the last bit is 1 */
		xor_result >>= 1;        /* Right shift to examine the next bit */
	}

	return (count);
}
