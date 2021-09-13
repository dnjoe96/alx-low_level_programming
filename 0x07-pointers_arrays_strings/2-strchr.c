#include "main.h"
#include "holberton.h"
/**
 * _strchr -  a function that locates a character in a string
 *
 * @s: The string
 * @c: The character we are searching for
 * Return: Pointer to the char in the string s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			break;
	} while (*s++);

	return (s);
}
