/**
 *_strncpy -checks for a lowercase character
 *@dest: letter being tested
 *@src : letter being tested
 *@n : letter being testes
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		if (*(src + i) == 0)
		{
			*(dest + i) = *(src + i);
			break;
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
