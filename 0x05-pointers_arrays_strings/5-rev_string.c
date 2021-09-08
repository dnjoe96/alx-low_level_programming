#include "main.h"
#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: The string input
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char *start_ptr, *end_ptr, ch;

	l = 0;

	while (*(s + l) != '\0')
		l++;

	start_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		end_ptr++;

	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = ch;

		start_ptr++;
		end_ptr--;
	}
}
