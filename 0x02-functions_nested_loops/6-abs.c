#include "main.h"

/**
 * _abs - get the absolute value of a number
 * @n: the input to be checked
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		abs = n;
		return (abs);
	}
	else
	{
		abs = n * -1;
		return (abs);
	}
}
