// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    char nu = '"';
//      printf("%c\n", c);
        // int nu = (int) c;
        printf("%d\n", nu);
    if (nu >= 97 && nu <= 122) {
            printf("Lower");
        //     return (1);
    }
                
    else if (nu >= 65 && nu <= 90)
                {
                        printf("upper");
                        // return (0);
                }
                
    else {
                printf("Upper");
                // return (0);
    }
                
}