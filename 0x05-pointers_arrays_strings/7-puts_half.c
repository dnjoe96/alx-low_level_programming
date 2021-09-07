#include "main.h"
#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: The string input
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (*(str + len) != '\0')
		len++;

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
