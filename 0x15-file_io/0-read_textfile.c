#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: file name
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t count_r, count_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	count_r = read(file, buffer, letters);
	if (count_r == -1)
		return (0);

	count_w = write(STDOUT_FILENO, buffer, count_r);

	if (count_w == -1 || count_r != count_w)
		return (0);

	free(buffer);

	close(file);

	return (count_w);
}
