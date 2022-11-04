#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min n. of coins to make change
 * @argc: n. of args
 * @argv: values of args
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int change;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		while (change - 25 >= 0)
		{
			change -= 25;
			coins++;
		}
		while (change - 10 >= 0)
		{
			change -= 10;
			coins++;
		}
		while (change - 5 >= 0)
		{
			change -= 5;
			coins++;
		}
		while (change - 2 >= 0)
		{
			change -= 2;
			coins++;
		}
		while (change -1 >= 0)
		{
			change -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
