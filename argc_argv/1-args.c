#include <stdio.h>

/**
 * main - print all arguments
 * @argc: int
 * @argv: list arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", (argc - 1));

	return (0);
}
