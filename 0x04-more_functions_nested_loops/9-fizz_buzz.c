#include <stdio.h>
/**
 * main - print fizz buzz
 *
 * Return: void
 */
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("%s", fizz);
		else if (i % 3 != 0 && i % 5 == 0)
			printf("%s", buzz);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("%s", fizzbuzz);
		else
			printf("%d", i);

		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
