#include "main.h"
/**
 * _isdigit - checks if an input is digit
 *
 * @c: character to be tested
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
