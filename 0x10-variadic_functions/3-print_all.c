#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * _strlenRecurise: calculates the length of a string recursively
 * @str: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

int _strlenRecursive(const char * const str)
{
	char t = *str;
	
	switch(t)
	{
		case '\0':
			return (0);
		default:
			return (1 + _strlenRecursive(str + 1));
	}
}


/**
 * _length - checks for a lowercase character
 *@mem : letter being tested
 *@format: letter being tested
 *@n: unkown arguments
 * Return: Always 0
 *
 */

int _length(char *mem, const char * const format, int n)
{
	int i = 0;
	char t;

	while (*(format + i) != 0)
	{
		t = *(format + i);
		switch (t)
		{
			case 'c':
				*(mem + n) = *(format + i);
				n++;
				break;
			case 'i':
				*(mem + n) = *(format + i);
				n++;
				break;
			case 'f':
				*(mem + n) = *(format + i);
				n++;
				break;
			case 's':
				*(mem + n) = *(format + i);
				n++;
				break;
			default:
				i++;
				continue;
		}
		i++;
	}

	*(mem + n + 1) = 0;
	return (n);
}



/**
 * print_all - checks for a lowercase character
 *@format: letter being tested
 *@...: unkown arguments
 * Return: Always 0
 *
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	char *mem = malloc(sizeof(char) * _strlenRecursive(format));
	char t;
	char *s;

	va_start(ptr, format);
	while (i < _length(mem, format, 0))
	{
		t = *(mem + i);
		switch (t)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			default:
				s = va_arg(ptr, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
		}
		if (i == _length(mem, format, 0) - 1)
		{
			i++;
			continue;
		}
		printf(", ");
		i++;
	}
	free(mem);
}
