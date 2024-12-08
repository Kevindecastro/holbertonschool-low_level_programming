#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	/*Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/*Open the file in write mode and append to the end (O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)/*If opening the file fails, return -1 */
		return (-1);

	/*If text_content is not NULL, calculate its len and WR it to the file */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		/*Write the text to the end of the file*/
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1) /*If writing fails, return -1*/
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
