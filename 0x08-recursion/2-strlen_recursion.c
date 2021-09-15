/**
 * _strlen_recursion - Uses recursion to find length of string.
 * @s: string to count
 *
 * Return: length of string (int)
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
