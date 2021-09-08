#include "main.h"
#include "holberton.h"
/**
 * string_toupper - converts string to upper case.
 *
 * @s: The string input
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
