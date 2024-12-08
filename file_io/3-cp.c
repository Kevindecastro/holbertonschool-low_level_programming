#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 on success, or exit with an appropriate error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes = 1024, num;
	char buf[1024];
/* Check if the correct number of arguments is provided */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
/* Open the source file for reading */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
/* create the destination file with permissions */
	file_to = creat(argv[2], 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}
/* Copying the contents of the source file to the destination file */
	while (bytes == 1024)
	{
		bytes = read(file_from, buf, 1024);
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num = write(file_to, buf, bytes);
		if (num < bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
/* Close the file descriptors */
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
