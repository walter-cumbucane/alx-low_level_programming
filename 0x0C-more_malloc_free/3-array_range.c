#include <stdlib.h>

/**
 * array_range - set the integer to 402
 * @min: a pointer the integer we want to set to 98
 * @max: letter being test
 * Return: nothing
 */

int *array_range(int min, int max)
{
	int *arr;
	int length;
	int i;

	i = 0;
	if (min > max)
	{
		return (NULL);
	}
	length = max - min + 1;
	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
	{
		return (arr);
	}
	while (min <= max)
	{
		*(arr + i) = min;
		min++;
		i++;
	}
	return (arr);
}
