#include "main.h"

/**
 *print_most_numbers - checks for a lowercase character
 * Description: takes no arguments
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
		if (i == 57)
		{
			_putchar(i);
		}
		i++;
	}
}
