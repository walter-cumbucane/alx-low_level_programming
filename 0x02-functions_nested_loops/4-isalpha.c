/**
 *_isalpha - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && a <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
