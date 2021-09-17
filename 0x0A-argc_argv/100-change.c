#include <stdio.h>
#include <stdlib.h>

/**
 * get_count - get the count of change
 *
 * @amount: The amount input
 *
 * Return: The count of change
 */
int get_count(int amount)
{
	int count, bal;

	count = 0;
	bal = amount;

	while (bal != 0)
	{
		if (bal >= 25)
		{
			count = count + bal / 25;
			bal = bal % 25;
		}
		else if (bal < 25 && bal >= 10)
		{
			count = count + bal / 10;
			bal = bal % 10;
		}
		else if (bal < 10 && bal >= 5)
		{
			count = count + bal / 5;
			bal = bal % 5;
		}
		else if (bal < 5 && bal >= 2)
		{
			count = count + bal / 2;
			bal = bal % 2;
		}
		else
		{
			count = count + bal;
			bal = 0;
		}
	}
	return (count);
}

/**
 * main - Entry point
 *
 * @argc: The length of the commandline input array
 * @argv: The input array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int count, bal;

	if (argc == 2)
	{
		bal = atoi(argv[1]);
		count = get_count(bal);
		printf("%d\n", count);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
