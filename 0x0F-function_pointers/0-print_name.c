#include <stdlib.h>

/**
 * print_name - Prints name
 *
 * @name: Name string
 * @f: point to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
