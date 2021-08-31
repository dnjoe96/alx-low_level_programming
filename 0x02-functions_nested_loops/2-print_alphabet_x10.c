#include "main.h"

/**
 * print_alphabet_x10 - print all alphabets ten times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(97 + j);
		}
		_putchar('\n');
	}
}
