#include "function_pointers.h"

/**
 * int_index - checks for a lowercase character
 *@array: letter being tested
 *@size: letter being tested
 *@cmp: letter being tested
 * Return: Always 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int test;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		test = (*cmp)(*(array + i));
		if (test != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
