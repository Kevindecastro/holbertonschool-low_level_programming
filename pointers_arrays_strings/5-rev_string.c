#include "main.h"

/**
* rev_string - Entry Function
* @s: reset The pointers
* Return: returns nothing
*/

void rev_string(char *s)
{
	char tmp;
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
