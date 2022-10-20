#include "main.h"

/**
 * print_line - draws a straigjt line
 * @n: number of times '_' is printed; if n<=0 the only new line is printed
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
