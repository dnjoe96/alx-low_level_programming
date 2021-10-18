#include "main.h"

/**
 * create_file - function that creates a file and writes to it.
 *
 * @filename: filename.
 * @text_content: content to write in the file
 *
 * Return: 1 on success, -1 on failure or if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
