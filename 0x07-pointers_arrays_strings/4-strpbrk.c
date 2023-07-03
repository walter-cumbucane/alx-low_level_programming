/**
 *_strpbrk -checks for a lowercase character
 *@s: letter being tested
 *@accept : letter being tested
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != 0)
	{
		j = 0;
		while (*(accept + j) != 0)
		{
			if (*(s + i) == *(accept + j))
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return (0);
}
