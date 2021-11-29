#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: Destination string
 * @src: String to be copied
 * @n: number of bytes to use
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (*(dest + i) == '\0')
		{
			*(dest + i) = '\0';
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}

	return (dest);
}
