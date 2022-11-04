#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies
 * @argc: the num of args
 * @argv: the values of args
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
