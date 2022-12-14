#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int) strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
