/**
 *_memset -checks for a lowercase character
 *@s: letter being tested
 *@b : letter being tested
 *@n : letter being testes
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
