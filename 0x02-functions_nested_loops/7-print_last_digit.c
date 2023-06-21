#include "main.h"

/**
 * print_last_digit - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int print_last_digit(int c)
{
	int r;

	r = c % 10;
	_putchar(r);
	return (r);
}
