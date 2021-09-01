// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
// #include <stdlib.h>


int main(void) {
        
        int p, i, j;
        
        for (int n = 0; n <= 9; n++)
        {
            for (int m = 0; m <= 9; m++)
            {
                p = n * m;
                
                if (p > 9)
                {
                    i = p / 10;
                    j = p % 10;
                    
                    putchar('0' + i);
                    putchar('0' + j);
                }
                else
                {
                    putchar('0' + p);
                }
                
                if ((p != 81 && m != 9)|| (n > 0 && m >= 5))
                {
                    putchar(',');
                    putchar(' ');
                    if (p <= 9)
                        putchar(' ');
                }
            }
            putchar('\n');
        }
}