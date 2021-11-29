#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: Destination string
 * @src: String to be concatented
 * @n: number of bytes to use
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;

	while (*(dest + len) != '\0')
		len++;

	i = 0;

	while (i < n)
	{
		if (*(src + i) == '\0')
			break;

		*(dest + len + i) = *(src + i);
		i++;
	}

	return (dest);
}
