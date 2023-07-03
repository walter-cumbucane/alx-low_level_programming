/**
 *_strlen -checks for a lowercase character
 *@s: letter being tested
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (*(s + i) != 0)
	{
		len++;
		i++;
	}
	return (len);
}

/**
 *_strstr -checks for a lowercase character
 *@haystack: letter being tested
 *@needle : letter being tested
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int len1;
	int len2;

	len1 = _strlen(haystack);
	len2 = _strlen(needle);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
			if (j == len2 - 1)
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return (0);
}
