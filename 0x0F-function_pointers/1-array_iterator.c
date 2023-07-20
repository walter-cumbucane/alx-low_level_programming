#include "function_pointers.h"

/**
 * array_iterator - checks for a lowercase character
 *@array: letter being tested
 *@size: letter being tested
 *@action: letter being tested
 * Return: Always 0
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		(*action)(*(array + i));
		i++;
	}

}
