#include <stdio.h>

/**
 * main - print name's program
 * @argc: int argc
 * @argv: array of list
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");

	return (0);
}
