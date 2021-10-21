#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	//unsigned char buffer[18];
	unsigned int bit_mode;
	int big_endian;
	int fd;
	char *buffer;
	int letters = 100;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	
	buffer = malloc(sizeof(char) * letters);
        if (buffer == NULL)
        {
                return (0);
        }

        read(fd, buffer, letters);

	write(STDIN_FILENO, buffer, strlen(buffer));

	return (0);
}
