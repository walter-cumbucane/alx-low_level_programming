/**
 *_strchr -checks for a lowercase character
 *@s: letter being tested
 *@c : letter being tested
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		s += i;
		return (s);
	}
	s = 0;
	return (s);
}
