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
 * str_concat - a function that concatenates two strings
 *
 * @s1:  string1
 * @s2: string2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *str;

	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
			*(str + i) = s1[i];
		else
			*(str + i) = s2[i - len1];
	}

	*(str + i + 1) = '\0';

	return (str);
}
