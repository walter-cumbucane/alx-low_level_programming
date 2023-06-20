#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
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
