#include "main.h"
#include "holberton.h"
#include <stdlib.h>
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
 * string_nconcat - a function that concatenates two strings
 *
 * @s1:  string1
 * @s2: string2
 * @n: Number of characters of s2
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			*(str + i) = s1[i];
		else
			*(str + i) = s2[i - len1];
	}

	*(str + i + 1) = '\0';

	return (str);
}
