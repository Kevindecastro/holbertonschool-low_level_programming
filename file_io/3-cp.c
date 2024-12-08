#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print error message and exit program
 * @message: Custom error message
 * @file: File causing the error (or NULL if irrelevant)
 * @exit_code: Exit code to terminate the program
 */
void print_error(const char *message, const char *file, int exit_code)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * close_file - Close a file descriptor with error handling
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copy content from one file to another
 * @file_from: Path to the source file
 * @file_to: Path to the destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buf[BUFFER_SIZE];

	/* Open source file */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file", file_from, 98);
	/* Open/create destination file */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		print_error("Error: Can't write to file", file_to, 99);
	}
	/* Read and write loop */
	while ((bytes_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1 || bytes_written < bytes_read)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error("Error: Can't write to file", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error("Error: Can't read from file", file_from, 98);
	}

	/* Close both files */
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Entry point for the program
 * @argc: Number of arguments
 * @argv: List of arguments
 *
 * Return: 0 on success, error codes otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error("Usage: cp file_from file_to", NULL, 97);

	copy_file(argv[1], argv[2]);

	return (0);
}
