#include "main.h"

/**
 * times_table - prints 9 times table, staring with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int a = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('0');
	_putchar('\n');

	for (i = 1; i < 10; i++)
	{
		
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (a > 10)
				_putchar((a / 10) + '0');
			if (a < 10 && a != 0)
				_putchar(' ');
			_putchar((a % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
