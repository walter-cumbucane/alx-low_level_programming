/**
 *_memcpy -checks for a lowercase character
 *@dest: letter being tested
 *@src : letter being tested
 *@n : letter being testes
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*(src + i) == 0)
		{
			*(dest + i) == 0;
			break;
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return dest;
}
