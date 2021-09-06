#include "main.h"
#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string, 
 * starting with the first character, followed by a new line
 *
 * @str: The string input
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
