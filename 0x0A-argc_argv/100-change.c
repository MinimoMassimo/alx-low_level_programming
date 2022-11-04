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
	int change, i;
	int coins = 0;
	int k[] = {25, 10, 5, 2, 1};

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
		for (i = 0; change >= 0 && i < 5;)
		{
			if (change - k[i] < 0)
				i++;
			change -= k[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
