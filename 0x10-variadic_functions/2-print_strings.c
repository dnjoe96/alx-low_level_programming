#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings passed
 *
 * @separator: The number seperator
 * @n: The number of number
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *item;
	va_list strings;

	va_start(strings, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			item = va_arg(strings, char*);

			if (separator != NULL && i > 0)
				printf("%s", separator);

			if (item != NULL)
				printf("%s", item);
			else
				printf("(nil)");
		}
		va_end(strings);
	}
	printf("\n");
}
