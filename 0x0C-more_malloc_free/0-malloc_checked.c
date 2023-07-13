#include <stdlib.h>

/**
 * malloc_checked - set the integer to 402
 * @b: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}

