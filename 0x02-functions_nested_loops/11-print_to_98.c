#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: single input of type int
 * Return: void
 */
void print_to_98(int n)
{
	int a;
	if (n > 98)
	{
		while (n > 98)
		{
			
			if (n >= 100)
				_putchar((n / 100) + '0');
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			if (n < 0)
			{
				a = -1 * n;
				_putchar('-');
				if (a >= 100)
                        	       	_putchar((a / 100) + '0');
                        	if (a >= 10)
					_putchar((a / 10) + '0');
                        	_putchar((a % 10) + '0');
                        	_putchar(',');
                        	_putchar(' ');
			}
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
                        n++;
		}
	}
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
