#include <stdio.h>

int main()
{
    int count, i;
    
    char *format = "I %c great %s";
    
    i = 0;
    count = 0;
    while (*format)
	{
        printf("%c", format[i]);
        *format++;
        if (format[i] == '%')
        {
            count += 1;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
