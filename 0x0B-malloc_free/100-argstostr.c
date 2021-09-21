#include "main.h"
#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: arg count
 * @av: arg array
 * Return: String
 */
char *argstostr(int ac, char **av)
{
	char *strDup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	/* count the number of chars in each string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	strDup = malloc(sizeof(char) * size);
	if (strDup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strDup[k++] = av[i][j];
		}
		strDup[k++] = '\n';
	}
	strDup[k] = '\0';
	return (strDup);
}
