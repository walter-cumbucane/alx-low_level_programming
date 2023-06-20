#include "main.h"

/**
 * print_alphabet_x10 - Function of interest
 *
 * Description: 'prints out 10 times the alphabet in lowercase 10'
 *
 * Return: Don't return anything
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
