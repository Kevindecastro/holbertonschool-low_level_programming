#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the file
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed, or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t let, file, w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	let = read(file, txt, letters);

	w = write(STDOUT_FILENO, txt, let);

	close(file);

	return (w);
}
