#include "main.h"
#include "holberton.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: The string input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
