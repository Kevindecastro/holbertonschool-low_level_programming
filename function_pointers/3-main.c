#include "3-calc.h"
/**
 * main - program to find an operation
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	return (98);
}
