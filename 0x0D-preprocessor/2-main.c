#include "main.h"
#include <stdio.h>

/**
 * main - prints name of file it was compiled from
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", _FILE_); 
	return (0);
}
