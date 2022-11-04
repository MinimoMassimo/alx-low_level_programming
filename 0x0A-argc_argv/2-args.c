#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments
 * @argc: the number of args
 * @argv: the args
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
