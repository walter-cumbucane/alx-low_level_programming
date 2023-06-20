#include "main.h"

/**
 * print_alphabet - Function of interest
 *
 * Description: 'prints out all alphabet in lowercasw'
 *
 * Return: Don't return anything
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		if (i == 122)
		{
			_putchar('\n');
		}
		i++;
	}
}
