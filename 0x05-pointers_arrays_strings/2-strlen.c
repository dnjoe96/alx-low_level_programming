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
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
