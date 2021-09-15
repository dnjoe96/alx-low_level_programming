/**
 * factorial - Uses recursion to calculate factorial of a number.
 * @n: number to find factorial of.
 *
 * Return: factorial of n (int)
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
		return (x);
	}
}
