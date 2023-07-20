#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>


/* *_putchar function declaration */
int _putchar(char c);

/* * task 0 function declaration */
void print_name(char *name, void (*f)(char *));

/* * task 1 function declaration */
void array_iterator(int *array, size_t size, void(*action)(int));

#endif
