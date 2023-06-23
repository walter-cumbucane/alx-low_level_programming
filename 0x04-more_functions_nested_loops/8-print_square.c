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

		i = 1;
		while (i <= size)
		{	j = 1;
			while (j <= size)
			{
				_putchar(35);
				j++;
			}
			if (i == size)
			{
				_putchar('\n');
			}
			i++;
		}
	}
}
