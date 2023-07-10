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
	int i;
	int j;

	i = 0;
	if (width == 0 || height == 0)
	{
		arr = NULL;
		return (NULL);
	}
	arr = malloc(sizeof(*int) * height);
	while (i < height)
	{
		*(arr + i) = malloc(sizeof(int) * width);
		i++;
	}
	return (arr);
}



