#include "main.h"
#include <stdio.h>
/**
 * main - cumputes first 5o fibonnaci number
 *
 * Return: void
 */
int main(void)
{
	int i;
	long int num, num1, num2;

	num1 = 1;
	num2 = 2;

	printf("%ld, ", num1);
	printf("%ld, ", num2);

	i = 0;
	while (i < 48)
	{
		if (num1 == 1)
			num = 2;
		if (num2 % 2 != 0)
			num2++;

		num = num2;
		num2 = num1 + num2;

		if (num2 + num > 4000000)
		{
			printf("%ld\n", num2);
			break;
		}
		else
		{
			printf("%ld, ", num2);
			num1 = num;
			i++;
		}
	}
	return (0);
}
