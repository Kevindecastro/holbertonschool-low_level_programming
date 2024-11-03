#include "main.h"
/**
 * *leet - encoding string into leet
 * @str: string to convert
 * Return: string convert
 */

char *leet(char *str)
{
	int i;
	char *r = str;
	char a[] = { 'a', 'e', 'o', 't', 'l'};
	char b[] = { 4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = b[i] + '0';
		}
		str++;
	}
	return (r);
}
