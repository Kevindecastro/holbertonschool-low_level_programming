#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: strins sources
 * @accept: substring
 * Return: nomber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (count);
	}

	return (count);
}
