#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - checks for a lowercase character
 *@n: letter being tested
 *@...: unkown arguments
 * Return: Always 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	va_start(ptr, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < count; i++)
		sum += va_arg(ptr, int);
	return (sum);
}
