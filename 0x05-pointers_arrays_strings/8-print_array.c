#include <stdio.h>

/**
 * print_array - set the integer to 402
 * @a: a pointer the integer we want to set to 98
 * @n : number of elements of the array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (7 > 5)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
			break;
		}
		else
		{
			printf("%d, ", *(a + i));
			i++;
		}
	}
}

