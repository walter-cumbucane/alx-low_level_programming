#include "main.h"

/**
 *print_square -checks for a lowercase character
 *@size: letter being tested
 * Return: Always 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		i = 0;
		j = 0;
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			if (i == (size - 1))
			{
				_putchar('\n');
			}
			i++;
		}
	}
}
