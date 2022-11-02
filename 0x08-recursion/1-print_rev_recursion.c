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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
