#ifndef FUNC_H
#define FUNC_H

int _putchar(char);
void print_name(char *name, void (*f)(char *));

typedef long unsigned int size_t;
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
