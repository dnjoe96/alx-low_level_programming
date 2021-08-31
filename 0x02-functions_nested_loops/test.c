// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>


int main(void) {
        int n = 2;
        int i, j;

        for (int a = n; a <= 98; a++) {
            
            if (a > 9) {
                i = a / 10;
                j = a % 10;
                
                putchar('0' + i);
                putchar('0' + j);
            } else{
                i = a;
                putchar('0' + i);
            }
            
            if (i != 9 || j != 8)
            {
            putchar(',');
            putchar(' ');
            }   
        }
}