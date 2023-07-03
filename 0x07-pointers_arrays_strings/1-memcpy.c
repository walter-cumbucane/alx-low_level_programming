#include "main.h"

/**
 *_memcpy -checks for a lowercase character
 *@dest: letter being tested
 *@src : letter being tested
 *@n : letter being testes
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
