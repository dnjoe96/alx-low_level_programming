/**
 * _strlen_recursion - A function using recursion to find length of
 * string.
 *
 * @s: string input
 * Return: length of string (int)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
