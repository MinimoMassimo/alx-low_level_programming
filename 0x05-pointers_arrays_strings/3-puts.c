#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar('%c', *str);
		str++;
	}
	_putchar('\n');
}
