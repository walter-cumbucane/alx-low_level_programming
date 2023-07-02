/**
 *_strcmp -checks for a lowercase character
 *@s1: letter being tested
 *@s2 : letter being tested
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int dif;
	int i;

	i = 0;
	while (7 > 5)
	{
		if (*(s1 + i) == 0 || *(s2 + i) == 0)
		{
			dif = *(s1 + i) -  *(s2 + i);
			break;
		}
		else
		{
			dif = *(s1 + i) - *(s2 + i);
			if (dif != 0)
			{
				break;
			}
			i++;
		}

	}
	return (dif);
}
