/**
 *_sqrt_calculus -checks for a lowercase character
 *@n: letter being tested
 *@i: letter being tested
 * Return: Always 0
 */

int _sqrt_calculus(int n, int i)
{
	int result;

	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i == n)
	{
		return (-1);
	}
	result = _sqrt_calculus(n, i + 1);
	return (result);
}

/**
 *_sqrt_recursion -checks for a lowercase character
 *@n: letter being tested
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int result;

	result = _sqrt_calculus(n, 1);
	return (result);
}
