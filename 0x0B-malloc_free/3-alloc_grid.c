#include <stdlib.h>

/**
 * alloc_grid - set the integer to 402
 * @width: a pointer to the beginning of a string
 * @height : letter being tested
 * Return: nothing
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	i = 0;
	if (width == 0 || height == 0)
	{
		arr = NULL;
		return (arr);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (arr);
	}
	while (i < height)
	{
		*(arr + i) = malloc(sizeof(int) * width);
		j = 0;
		while (j < width)
		{
			*(*(a + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
