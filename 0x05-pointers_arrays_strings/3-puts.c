#include "main.h"

/**
 * _puts - set the integer to 402
 * @str: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (7 > 5)
	{
		if (*(str + i) != 0)
		{
			_putchar(*(str + i));
			i++;
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}
