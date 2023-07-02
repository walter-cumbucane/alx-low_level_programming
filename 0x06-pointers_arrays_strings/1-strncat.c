/**
 *_strncat -checks for a lowercase character
 *@dest: letter being tested
 *@src : letter being tested
 *@n : letter being testes
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (7 > 5)
	{
		if (*(dest + i) == 0)
		{
			j = 0;
			while (j != n)
			{
				if (*(src + j) == 0)
				{
					*(dest + i) = *(src + j);
					break;
				}
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
			break;
		}
		i++;
	}
	return (dest);
}
