#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	len -= 1;
	while (len >= 0)
	{
		_putchar(*s[len]);
		len--;
	}
	_putchar('\n');
}
