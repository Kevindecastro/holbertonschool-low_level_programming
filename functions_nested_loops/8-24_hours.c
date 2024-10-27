#include "main.h"

/**
 * jack_bauer - print every minute and hours
 *              start at 00:00 to 23:59
 * Print "_putchar in newline"
 * Return: 0.
 */

void jack_bauer(void)
{
	int hours, minute;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
