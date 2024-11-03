#include "main.h"
/**
 * *string_toupper - change letters into uppercase
 * @str: character source
 * Return: Character change
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}

	return (str);
}
