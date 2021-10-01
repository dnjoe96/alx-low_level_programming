#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the input passed to the function
 *
 * @n: number of integars
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
