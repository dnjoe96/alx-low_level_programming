#include "main.h"
#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: The string input
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\n'; i++)
		len++;

	return (len);
}
