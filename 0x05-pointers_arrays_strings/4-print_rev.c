#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	for (; *s != '\0'; s++)
		len ++;
	for (; len <=0; len --)
		_putchar(*(s + len));
	_putchar('\n');
}
