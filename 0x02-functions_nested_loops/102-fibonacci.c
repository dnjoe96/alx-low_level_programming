#include "main.h"
#include <stdio.h>
/**
 * main - cumputes first 5o fibonnaci number
 *
 * Return: void
 */
int main(void)
{
	int i, num;
	long int num1, num2;

	num1 = 1;
	num2 = 2;

	printf("%ld, ", num1);
	printf("%ld, ", num2);

	i = 0;
	while (i < 48)
	{
		num = num2;
		num2 = num1 + num2;

		if (i == 47)
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
