#include "main.h"


/**
 *print_diagonal -checks for a lowercase character
 *@n: letter being tested
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		printf('\n');
	}
	else
	{
		int i;
		int j;

		i = 1;
		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');
			j = 1;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			i++;
		}
	}
}

