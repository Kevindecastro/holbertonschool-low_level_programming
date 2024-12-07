#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @filename: Nom du fichier.
 * @text_content: Texte à ajouter.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	/*Vérifie si filename est NUL */
	if (filename == NULL)
		return (-1);

	/*Ouvre le fichier en mode écriture et ajoute à la fin (O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)/*Si ouverture échoue, retourne - */
		return (-1);

	/*Si text_content n'est NULL, calcule sa longueur et l'écrit dans le fichie */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		/*écrit le texte à la fin du fich*/
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1) /*Si l'écriture échoue, retou*/
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
