#include "main.h"

/**
 *_puts_recursion -checks for a lowercase character
 *@s: letter being tested
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
