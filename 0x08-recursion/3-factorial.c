/**
 * factorial -checks for a lowercase character
 *@n: letter being tested
 * Return: Always 0
 */

int factorial(int n)
{
	int fact;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
