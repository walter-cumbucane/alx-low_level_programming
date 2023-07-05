/**
 * _pow_recursion -checks for a lowercase character
 *@x: letter being tested
 *@y: letter being tested
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	result = x * _pow_recursion(x, y - 1);
	return (result);
}

