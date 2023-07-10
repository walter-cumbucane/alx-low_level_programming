#include <stdlib.h>

/**
 * create_array -checks for a lowercase character
 *@size: letter being tested
 *@c : letter being tested
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		s = NULL;
		return (s);
	}
	else
	{
		s = malloc(sizeof(char) * size);
		if (s == NULL)
		{
			return (s);
		}
		else
		{
			int i;

			i = 0;
			while (i < size)
			{
				*(s + i) = c;
				i++;
			}
			return (s);
		}
	}
}
