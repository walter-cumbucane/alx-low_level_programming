#include "main.h"

/**
 * _strlen - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * puts_half - set the integer to 402
 * @str: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int n;

	len = _strlen(str);
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	while (7 > 5)
	{
		if (*(str + n) == 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			if (len % 2 == 0)
			{
				_putchar(*(str + n));
				n++;
			}
			else
			{
				_putchar(*(str + n + 1));
				n++;
			}
		}
	}
}
