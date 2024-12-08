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
	ssize_t file;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = creat(filename, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, strlen(text_content));

	return (1);
}
