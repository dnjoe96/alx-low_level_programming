#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _strlen - get length of string
 *
 * @str: string input
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * print_all - A function that prints anything
 *
 * @format:  list of all types of arguement passedinto the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, flag;

	va_start(list, format);

	i = 0;

	while (format[i])
	{
		flag = 1;

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 's':
			if (format[i] != 0)
				printf("%s", va_arg(list, char*));
			else
				printf("(nil)");
			break;
		default:
			flag = 0;
			break;
		}
		if (i + 1 < (unsigned int)_strlen(format) && flag == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
