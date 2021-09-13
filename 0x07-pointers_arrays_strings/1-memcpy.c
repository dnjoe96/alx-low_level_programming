#include "main.h"
#include "holberton.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters in the string src to copy to dest
 * Return: A pointer to the array dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}

	return (dest);
}
