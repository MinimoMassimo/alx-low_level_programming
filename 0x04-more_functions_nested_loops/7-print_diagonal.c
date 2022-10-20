#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: how many times '\' is drawn
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n == 0)
		__putchar('\n');
}
