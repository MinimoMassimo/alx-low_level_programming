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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 && j == 0)
				a = 0;
			a = i * j;
			_putchar(a);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
