#include "holberton.h"

/**
 * _print_rev_recursion - A function using recursion to reverse a string.
 * 
 * @s: string input
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
