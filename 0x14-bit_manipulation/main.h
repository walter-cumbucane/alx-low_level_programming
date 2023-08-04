#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

/* _putchar function declaration */
int _putchar(char c);

/* task 0 function declaration */
unsigned int binary_to_uint(const char *b);

/* task 1 function declaration */
void print_binary(unsigned long int n);

/* task 2 function declaration */
int get_bit(unsigned long int n, unsigned int index);

/* task 3 function declaration */
int set_bit(unsigned long int *n, unsigned int index);

/* task 4 function declaration */
int clear_bit(unsigned long int *n, unsigned int index);

/* task 5 function declaration */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* task 6 function declaration */
int get_endianness(void);

#endif
