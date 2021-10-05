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
void _print(const char * const format, ...)
{
	va_list list;
	int i, count;
    
    i = 0;
    count = 0;

	while (format[i])
    	{
	    	if (format[i] == '%')
	    	{	
			count += 1;
	    	}
		    i++;
	}
	printf("%i\n", count);
	va_start(list, count);
	i = 0;
	
	while (format[i])
	{
	    
	    if (format[i] == '%')
	    {
	        i++;

    		switch (format[i])
    		{
    		case 'c':
    			printf("%c", va_arg(list, int)); // print char
    			break;
    		case 'f':
    			printf("%f", va_arg(list, double)); // print float
    			break;
    		case 'i':
    			printf("%i", va_arg(list, int)); // print integar
    			break;
    		case 'd':
    			printf("%d", va_arg(list, int)); // print integar
    			break;
    		case 'b':
    			// unsigned integar is converted to binary
    			break;
    		case 's':
    			printf("%s", va_arg(list, char*)); // print string
    			break;
    		case 'u':
    			printf("%d", va_arg(list, int)); // print unsigned integar
    			break;
    		case 'o':
    			printf("%d", va_arg(list, int)); // print integar octal
    			break;
    		case 'x':
    			printf("%d", va_arg(list, int)); // print hexa small letter
    			break;
    		case 'X':
    			printf("%d", va_arg(list, int)); // print hex capital letter
    			break;
    		default:
    			break;
    		}
    		
	    }
	    else
	    {
	        printf("%c", format[i]);
	    }
	i++;
		
	}
	printf("\n");
	va_end(list);
}



int main(void)
{
    _print("There is %c guy called %s who has %i phones\n", 'a', "joseph", 7);
}
