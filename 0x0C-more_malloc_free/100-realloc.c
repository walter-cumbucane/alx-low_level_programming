#include <stdlib.h>

/**
 * _realloc - set the integer to 402
 * @ptr : letter being test
 * @old_size: a pointer the integer we want to set to 98
 * @new_size: letter being test
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	unsigned int i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size > old_size)
	{
		s = malloc(new_size);
		while (i < old_size)
		{
			*((char *)s + i) = *((char *)ptr + i);
			i++;
		}
		free(ptr);
	}
	return (s);
}
