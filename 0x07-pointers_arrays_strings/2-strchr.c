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
	while (7 > 5)
	{
		if (*(s + i) == 0)
		{
			s = 0;
			break;
		}
		if (*(s + i) == c)
		{
			s += i;
			break;
		}
		i++;
	}
	return (s);
}
