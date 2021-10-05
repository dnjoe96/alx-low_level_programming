#include <stdio.h> 
#include <stdarg.h>				

void Myprintf(char *,...); 				//Our printf function
char* convert(unsigned int, int); 		//Convert integer number into octal, hex, etc.


int main() 
{ 
	Myprintf(" \tWWW.F%cRMCO\nDES.COM %s %d     t\n", 'O', "Yeah", 9); 
	
	return 0;
}


void print_char(char c)
{
	putchar(c);
}

int print_str(char *s)
{
	if (s == NULL)
		return (0);
	
	while(*s)
	{
		putchar(*s);
		s++;
	}
	return (1);
}
void Myprintf(char* format,...) 
{ 
	char *traverse;
	
	//Module 1: Initializing Myprintf's arguments 
	va_list list; 
	va_start(list, format); 
	
	for(traverse = format; *traverse != '\0'; traverse++) 
	{
		while( *traverse != '%' ) 
		{
			putchar(*traverse);
			traverse++; 
		} 
		
		traverse++; 
		
		//Module 2: Fetching and executing arguments
		switch(*traverse) 
		{ 
		case 'c':
    			print_char(va_arg(list, int)); // print char
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
    			print_str(va_arg(list, char*)); // print string
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
	
	//Module 3: Closing argument list to necessary clean-up
	va_end(list); 
} 

char *convert(unsigned int num, int base) 
{ 
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50]; 
	char *ptr; 
	
	ptr = &buffer[49]; 
	*ptr = '\0'; 
	
	do 
	{ 
		*--ptr = Representation[num%base]; 
		num /= base; 
	}while(num != 0); 
	
	return(ptr); 
}
