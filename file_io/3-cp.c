#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUF_SIZE 1024
/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, bytes_read, bytes_written
	char buffer[BUF_SIZE];
	/*Check if the correct number of arguments is provided*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Open the source file*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Open the destination file, truncate it if it already exists*/
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);/*rw-rw-r-- permissions*/
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	/*Copy the content from file_from to file_to in chunks of BUF_SIZE*/
	while ((bytes_read = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)/*Check if write failed or didn't write all bytes*/
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	/*Check if reading from file failed*/
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Close the file descriptors and check for errors*/
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
