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
 * print-rev - set the integer to 402
 * @s: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	char ab [len];

	i = 0;
	while (i <= len)
	{
		if (i == len)
		{
			ab [i] = 0;
			i++;
		}
		else
		{
			ab [i] = *(s + i);
			i++;
		}
	}
	i = len - 1;
	while (i >=0)
	{
		_putchar(ab[i]);
		i--;
	}
}
