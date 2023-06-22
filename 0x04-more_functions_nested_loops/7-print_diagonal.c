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
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		i = 1;
		while (i <= n)
		{
			_putchar(92);
			_putchar('\n');
			j = 1;
			while (j <= i)
			{
				_putchar(32);
				j++;
			}
			i++;
		}
	}
}

