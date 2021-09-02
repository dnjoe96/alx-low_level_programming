#include "main.h"
#include "holberton.h"
/**
 * print_square - print square
 *
 * @n: dimension of square
 * Return: void
 */
void print_square(int n)
{
	int i;
      char fizz[] = "Fizz";
      char buzz[] = "Buzz";
      
      for (i = 0; i < 100; i++)
      {
          if (i % 3 == 0 && i % 5 != 0)
                printf("%c ", fizz);
          else if (i % 3 != 0 && i % 5 == 0)
                printf("%c ", buzz);
          else if (i % 3 == 0 && i % 5 == 0)
                printf("%c ", strcat(fizz, buzz));
          else
                printf("%d ", i);
      }
        
}
