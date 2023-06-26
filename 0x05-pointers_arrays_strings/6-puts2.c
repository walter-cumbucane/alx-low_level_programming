#include "main.h"

/**
 * puts2 - set the integer to 402
 * @str: a pointer the integer we want to swap
 *
* Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (7 > 5)
	{
		if (*(str + i) == 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			if (i % 2 == 0)
			{
				_putchar(*(str + i));
			}
			i++;
		}
	}
}
