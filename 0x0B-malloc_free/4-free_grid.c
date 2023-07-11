#include "main.h"
#include <stdlib.h>


/**
 * free_grid - set the integer to 402
 * @grid : a pointer to the beginning of a string
 * @height : letter being tested
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = height - 1;
	while (i >= 0)
	{
		free(*(grid + i));
		i--;
	}
	free(grid);
}
