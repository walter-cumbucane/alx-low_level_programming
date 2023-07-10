#include <stdlib.h>

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
 * _strdup - set the integer to 402
 * @str: a pointer to the beginning of a string
 *
 * Return: nothing
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	len = _strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (s);
	}
	while (i <= len)
	{
		if (i == len)
		{
			*(s + i) = 0;
			i++;
		}
		else
		{
			*(s + i) = *(str + i);
			i++;
		}
	}
	return (s);
}
