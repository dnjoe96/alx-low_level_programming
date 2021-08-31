// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>


int main() {
        int abs;
        int num = -15;

        if (num >= 0) {
                abs = num;
                printf("%d\n", abs);
        } else {
                abs = num * -1;
                printf("%d\n", abs);
        }
}