/**
 * swap_int - set the integer to 402
 * @a: a pointer the integer we want to swap
 *@b : a pointer the integer we want to swap
 *
* Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
