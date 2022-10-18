#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: single int input
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, a;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < n; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('0');
	_putchar('\n');
	for (i = 1; i <= n; i++){
		for(j = 0; j <= n; j++)
		{
			a = i * j;
			if (a >= 100)
			{
				_putchar((a / 100) + '0');
				_putchar(((a % 100) / 10) + '0');
			}
			else if (a >= 10)
				_putchar((a / 10) + '0');
			if (a < 10 && a != 0)
				_putchar(' ');
			_putchar((a % 10) + '0');
			if (j != n)
			{
				_putchar(',');
				_putcahr(' ');
				if (a < 100)
				{
					_putchar(' ');
					if (a < 10)
						_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
