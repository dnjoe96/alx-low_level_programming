#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: if the number of argument is not the correct one,
 * exit with code 97
 * if file_from does not exist, or if you can not read it,
 * exit with code 98
 * if you can not create or if write to file_to fails,
 * exit with code 99
 * f you can not close a file descriptor , exit with code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r_from;
	int c_from, c_to;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	
	r_from = read(file_from, buf, 1024);
	
	while (r_from > 0)
	{
		if (file_to < 0 || (write(file_to, buf, r_from) != r_from))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r_from = read(file_from, buf, 1024);
	}

	if (r_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	c_from = close(file_from);

	if (c_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}

	c_to = close(file_to);

	if (c_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
