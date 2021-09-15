/**
 * factorial - A function using recursion to calculate factorial of a number.
 *
 * @n: number to find factorial.
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
