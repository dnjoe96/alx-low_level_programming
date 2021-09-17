#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_str - check string for num digits
 *
 * @str: String input
 * Return: 0 if string contains non-digitd, else 1
 */
int check_str(char *str)
{
	while (*str != '\0')
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * @argc: The length of the commandline input array
 * @argv: The input array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_str(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
