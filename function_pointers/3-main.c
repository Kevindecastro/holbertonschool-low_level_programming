#include "3-calc.h"
/**
 * main - program to find an operation
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(argv[2]);

	if (!fptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
