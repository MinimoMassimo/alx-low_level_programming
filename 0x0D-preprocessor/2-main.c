#include "main.h"
#include <stdio.h>

/**
 * main - prints name of file it was compiled from
 * Return: always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]); 
	return (0);
}
