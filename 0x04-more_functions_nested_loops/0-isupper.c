#include "main.h"
#include "holberton.h"
/**
 * _isupper -  a function that checks for uppercase characte.
 *
 * @c: letter to be tested
 * Return: 1 if c is upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
