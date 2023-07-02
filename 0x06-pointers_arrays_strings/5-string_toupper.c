/**
 *string_toupper -checks for a lowercase character
 *@a: letter being tested
 * Return: Always 0
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (*(a + i) != 0)
	{
		if (*(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) -= 32;
		}
		i++;
	}
	return (a);
}
