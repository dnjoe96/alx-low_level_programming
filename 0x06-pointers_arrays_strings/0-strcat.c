#include "main.h"
#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: Destination string
 * @src: String to be concatented
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (*(dest + len) != '\0')
		len++;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + len + i) = *(src + i);
		i++;
	}

	return (dest);
}
