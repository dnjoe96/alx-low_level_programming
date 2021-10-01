#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers
 *
 * @separator: The number seperator
 * @n: The number of number
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL && i > 0)
				printf("%s", separator);

			printf("%d", va_arg(nums, int));
		}
		va_end(nums);
	}
	printf("\n");
}
