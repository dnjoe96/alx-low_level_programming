#include "main.h"
#include "holberton.h"
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: The given string
 * @b: The character will will use to replace
 * @n: The number of characters in the string we will replace
 * Return: A pointer to the string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
