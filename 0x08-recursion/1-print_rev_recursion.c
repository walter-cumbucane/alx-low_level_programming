#include "main.h"

/**
 *_print_rev_recursion -checks for a lowercase character
 *@s: letter being tested
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}

