/**
 * test - checks that the square of two number result to the other
 *
 * @a:int
 * @b:int
 *
 * Return: Int
 */
int test(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (test(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (test(1, n));
}
