/**
 *_strspn -checks for a lowercase character
 *@s: letter being tested
 *@accept : letter being tested
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	i = 0;
	count = 0;
	while (*(s + i) != ',' && *(s + i) != ' ' && *(s + i) != 0)
	{
		j = 0;
		while (*(accept + j) != 0)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
