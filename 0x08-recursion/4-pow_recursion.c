/**
 * _pow_recursion - Uses recursion to calculate factorial of a number.
 * @x: base to raise.
 * @y: power to raise base by
 *
 * Return: Value of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
