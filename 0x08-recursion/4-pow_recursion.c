/**
 * _pow_recursion - Uses recursion to calculate factorial of a number.
 * @x: base to raise.
 * @y: power to raise base by
 *
 * Return: Value of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
