#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Affiche un message d'erreur et quitte le programme.
 * @message: Le message d'erreur à afficher.
 * @exit_code: Le code de sortie.
 */
void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(exit_code);
}

/**
 * main - Copie le contenu d'un fichier dans un autre.
 * @argc: Le nombre d'arguments.
 * @argv: Les arguments.
 *
 * Return: Toujours 0.
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error_and_exit("Usage: cp file_from file_to\n", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_and_exit("Error: Can't read from file ", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		print_error_and_exit("Error: Can't write to file ", 99);

	while ((bytes_read = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error_and_exit("Error: Can't write to file ", 99);
	}

	if (bytes_read == -1)
		print_error_and_exit("Error: Can't read from file ", 98);

	if (close(file_from) == -1 || close(file_to) == -1)
		print_error_and_exit("Error: Can't close file descriptor\n", 100);

	return (0);
}
