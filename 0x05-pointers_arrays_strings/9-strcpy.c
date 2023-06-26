#include "main.h"

/**
 * _strcpy - set the integer to 402
 * @dest: a pointer the integer we want to set to 98
 * @src : source message
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (7 > 5)
	{
		if (*(src + i) == 0)
		{
			*(dest + i) = 0;
			break;
		}
		else
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (dest);
}
