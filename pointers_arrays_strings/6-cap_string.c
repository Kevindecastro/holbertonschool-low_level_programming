#include "main.h"
#include "2-strlen.c"
/**
 * cap_string - capitalize all words
 * @str: string param
 * Return: string char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	i++;
}
return (str);
}
