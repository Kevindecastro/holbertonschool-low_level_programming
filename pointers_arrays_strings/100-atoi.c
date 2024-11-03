#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: Integer convert
 */

int _atoi(char *s)
{
	int length = 0, negativeCount = 0, count = 0, num = 0;

	while (s[length] != '\0')
		length++;

	while (count < length)
	{
		if (s[count] == '-')
		{
			negativeCount++;
			}
		if (s[count] >= 48 && s[count] <= 57)
		{
			for (; s[count] >= 48 && s[count] <= 57; count++)
			{
				num = (10 * num - (s[count] - 48));
			}
			break;
		}
		count++;
	}
	if (negativeCount % 2 != 0)
		return (num);
	else
		return (-num);
}
