#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - checks for a lowercase character
 *@separator: letter being tested
 *@n: letter being tested
 *@...: unkown arguments
 * Return: Always 0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator == NULL)
			continue;
		if (i == n)
			continue;
		printf("%s", separator);
	}
	printf("\n");
}
