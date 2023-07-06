/**
 *_prime -checks for a lowercase character
 *@n: letter being tested
 *@i: letter being tested
 *@div: letter being testes
 * Return: Always 0
 */

int _prime(int n, int i, int div)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	if (i > n)
	{
		return (div);
	}

	if (n % i == 0)
	{
		div = div + 1;
	}
	result = _prime(n, i + 1, div);
	return (result);
}

/**
 *is_prime_number -checks for a lowercase character
 *@n: letter being tested
 * Return: Always 0
 */

int is_prime_number(int n)
{
	int result;

	result = _prime(n, 1, 0);
	if (result == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
