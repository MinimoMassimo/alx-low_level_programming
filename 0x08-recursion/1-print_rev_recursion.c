#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse using recursion
 * @s: the string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	if (*s == '\0')
	{
		_putchar(s--);
		*s = '\0';
		_print_rev_recursion(s--);
	}
	_print_rev_recursion(s++);
}
