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

	i = 0;
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < height)
	{
		*(arr + i) = malloc(sizeof(int) * width);
		if (*(arr + i) == NULL)
		{
			for (i--; i >= 0; i--)
				free(*(arr + i));
			free(*(arr + i));
			return (NULL);
		}
		for (int j = 0; j < width; j++)
		{
			*(*(arr + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
