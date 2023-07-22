#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - checks for a lowercase character
 *@separator: letter being tested
 *@n: letter being tested
 *@...: unkown arguments
 * Return: Always 0
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	va_start(ptr, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(ptr, char *);
		printf("%s", (s == NULL) ? "(nil)" : s);
		if (separator == NULL)
			continue;
		if (i == n)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
