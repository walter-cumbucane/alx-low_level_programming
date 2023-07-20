#include "function_pointers.h"

/**
 * print_name - checks for a lowercase character
 *@name: letter being tested
 *@f: letter being tested
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
