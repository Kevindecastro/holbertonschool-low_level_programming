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
	int fd;/*File descriptor for the created file*/
	ssize_t bytes_written;/*Tracks the number of bytes successfully written*/
	size_t length = 0;/*Holds the length of text_content*/

	/*Check if filename is NULL. If so, return -1 (error)*/
	if (filename == NULL)
		return (-1);

	/* Open file in write-only mode, create it if doesn't exist and truncate*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	/* If text_content is not NULL, calculate its length and write it */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bytes_written = write(fd, text_content, length);

		/*If write fails, close file and return -1.*/
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/* Close the file descriptor */
	close(fd);

	return (1);
}
