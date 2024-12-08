#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Prints an error message and exits with the corresponding code.
 * @code: Error code to exit with.
 * @arg: Additional argument for error message formatting (if needed).
 */
void handle_error(int code, const char *arg)
{
	switch (code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", arg);
		break;
	default:
		dprintf(STDERR_FILENO, "Unknown error\n");
		break;
	}
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with appropriate codes on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];
	char fd_str[12]; /* Buffer to store file descriptor as string for error reporting */

	/* Check if the number of arguments is correct */
	if (argc != 3)
		handle_error(97, NULL);

	/* Open the source file for reading */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		handle_error(98, argv[1]);

	/* Open the destination file for writing, create it if necessary */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from); /* Ensure the source file is closed before exiting */
		handle_error(99, argv[2]);
	}

	/* Read and write data in chunks */
	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			close(file_from);
			close(file_to);
			handle_error(99, argv[2]);
		}
	}

	/* Check for read error */
	if (read_bytes == -1)
	{
		close(file_from);
		close(file_to);
		handle_error(98, argv[1]);
	}

	/* Close the file descriptors */
	if (close(file_from) == -1)
	{
		snprintf(fd_str, sizeof(fd_str), "%d", file_from);
		handle_error(100, fd_str);
	}

	if (close(file_to) == -1)
	{
		snprintf(fd_str, sizeof(fd_str), "%d", file_to);
		handle_error(100, fd_str);
	}

	return 0;
}
