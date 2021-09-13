#include "main.h"
#include "holberton.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: The string
 * @accept: second string
 * Return: Pointer to the char in the string s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
				return (s);
		}

		s++;
	}
	return ('\0');
}
