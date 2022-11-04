#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: vals of args
 * Return: always 0, unless error which returns 1
 */
int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 0 || argv[i][j] > 9)
			{
				printf("Error\n");
				return (1);
			}
		}
		res = (int) argv[i] + res;
	}
	printf("%d\n", res);
	return (0);
}