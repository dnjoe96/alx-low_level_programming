#include "main.h"
#include "holberton.h"
/**
 * _strlen - get the length of a string
 *
 * @s: string input
 * Return: Length in int
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
/**
 * _strdup -  a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: The string input
 * Return: string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, size;

	if (str == NULL)
		return ('\0');

	size = _strlen(str);

	ptr = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
