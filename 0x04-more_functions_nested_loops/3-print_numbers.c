#include "main.h"

/**
 *print_numbers - checks for a lowercase character
 * Description: takes no arguments
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		if (i == 57)
		{
			_putchar ('\n');
		}
		i++;
	}
}
