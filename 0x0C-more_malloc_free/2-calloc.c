#include <stdlib.h>

/**
 * _calloc - set the integer to 402
 * @nmemb: a pointer the integer we want to set to 98
 * @size: letter being test
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		*(s + i) = 0;
	return (s);
}
