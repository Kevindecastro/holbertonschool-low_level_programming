#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: A string consisting only of '0' '1'
 *
 * Return: The converted number,
 * or 0 if the string contains an invade character
 * or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	/* Check if the string is NULL */
	if (b == NULL)
		return (0);
	/* Browse the channel */
	while (*b)
	{
		/* If the current character is neither '0' nor '1', returns 0 */
		if (*b != '0' && *b != '1')
			return (0);
		/* Shift the result to the left and add the value of the current bit */
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
