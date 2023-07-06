/**
 *wildcmp -checks for a lowercase character
 *@s1: letter being tested
 *@s2: letter being tested
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	int result;

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		result = 1;
		result *= _string_cmp(s1 + 1, s2 + 1);
		return (result);
	}
	else
	{
		return (0);
	}
}
