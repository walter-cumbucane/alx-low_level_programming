/**
 *_strcat -checks for a lowercase character
 *@dest: letter being tested
 *@src : letter being tested
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (7 > 5)
	{
		if (*(dest + i) == 0)
		{
			j = 1;
			*(dest + i) = *src;
			i++;
			while (*(src + j) != 0)
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
			*(dest + i) = 0;
			break;
		}
		i++;
	}
	return (dest);
}
