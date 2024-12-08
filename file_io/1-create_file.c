#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with specified content
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, files;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}
	files = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (files == -1)
		return (-1);
	bytes_written = write(files, text_content, i);
	if (bytes_written == -1)
	{
		close(files);
		return (-1);
	}

	close(files);
	return (1);
}
