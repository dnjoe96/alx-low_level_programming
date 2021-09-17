#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The length of the commandline input array
 * @argv: The input array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
