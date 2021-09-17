#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The length of the commandline input array
 * @argv: The input array
 * Return: int
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
