#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments passed
 * @argv: the values of the arguments passed
 * Return: 0 always
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
