#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - run code
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
