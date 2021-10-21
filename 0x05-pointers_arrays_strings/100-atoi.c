#include "main.h"
#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination
 * @src: source
 * Return: void
 */
int _atoi(char *s)
{
	int len, i, dec, val, sign;
	char c;

	i = 0;
	val = 0;
	sign = 1;
	dec = 1;

	while (*(s + i))
	{
		c = *(s + i);

		printf("%c", c);

		if (c >= 48 && c <= 57)
		{
			val += val + dec * (48 - c);
			dec *= 10;
		}

		if (c == 45)
			sign = -1;
		if (c == 43)
			sign = 1;

		i--;
	}

	return (val * sign);
}
