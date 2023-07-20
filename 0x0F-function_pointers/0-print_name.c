#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - checks for a lowercase character
 *@name: letter being tested
 *@f: letter being tested
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
