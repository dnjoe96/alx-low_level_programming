#include "main.h"
#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new
 * line
 *
 * @s: The string input
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
