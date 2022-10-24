#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	for (len -= len; len >= 0; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
