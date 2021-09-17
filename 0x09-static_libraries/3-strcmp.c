#include "main.h"
#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 *
 * @s1: String1
 * @s2: String2
 * Return: Difference between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum1, sum2;

	sum1 = 0;
	i = 0;

	while (*(s1 + i) != '\0')
	{
		sum1 += s1[i];
		i++;
	}

	sum2 = 0;
	i = 0;

	while (*(s2 + i) != '\0')
	{
		sum2 += s2[i];
		i++;
	}

	return (sum1 - sum2);
}
