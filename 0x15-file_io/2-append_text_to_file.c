#include "main.h"

/**
 * append_text_to_file -  function to appends text at the end of a file.
 *
 * @filename: file name
 * @text_content: is the NULL terminated string to add at the end
 * of the file
 *
 * Return: 1 on success and -1 on failure, If filename is NULL, and
 * if the file does not exist or if you do not have the required
 * permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wstatus;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;

		wstatus = write(fd, text_content, len);

		if (wstatus == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
