/**
 *_strlen_recursion -checks for a lowercase character
 *@s: letter being tested
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int len;
	if (*s == 0)
	{
		return (0);
	}
	s++;
	len = 1 + _strlen(s);
	return (len);
}
