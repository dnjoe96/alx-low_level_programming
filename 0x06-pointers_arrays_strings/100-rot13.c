#include "main.h"
#include "holberton.h"
/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @s: The string input
 * Return: void
 */
char *rot13(char *s)
{
	int i, j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(a + j) != '\0'; j++)
		{
			*(s + i) = *(b + j);
			break;
		}
	}

	return (s);
}
