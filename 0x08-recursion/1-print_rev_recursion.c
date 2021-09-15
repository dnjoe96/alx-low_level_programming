#include "holberton.h"

/**
 * _print_rev_recursion - Uses recursion to reverse a string.
 * @s: string to reverse
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{   _print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
