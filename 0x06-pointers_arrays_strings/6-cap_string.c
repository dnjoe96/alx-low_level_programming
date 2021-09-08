#include "main.h"
#include "holberton.h"
/**
 * cap_string - capitalize each word in a string
 *
 * @s: The string input
 * Return: void
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122 &&
				(*(s + i - 1) <= 40))
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
