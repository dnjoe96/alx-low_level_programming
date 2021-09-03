#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: void
 */
int main(void)
{
	long long int num = 612852475143;
	long long int fin;
	long long int divd;
	int val;

	fin = num;

	while (fin != 1)
	{
		divd = 2;
		val = 1;

		while (val != 0)
		{
			val = num % divd;

			if (val == 0)
			{
				num = num / divd;
				fin = num / divd;
			}
			divd++;
		}
	}
	printf("%lld\n", divd - 1);
}

