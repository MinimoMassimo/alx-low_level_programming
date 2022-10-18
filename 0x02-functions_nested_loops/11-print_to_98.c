#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: single input of type int
 * Return: void
 */
void print_to_98(int n)
{
	int a = n;
	int count = 0;

	if (n > 98)
	{
		while (n > 98)
		{
			while (a / 10 != 0)
			{
				count++;
				a = a / 10;
			}
			for (int i = count; i > 0; count --){
				_putchar((n / (10 ** i)) + '0');
			}
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
			 while (a / 10 != 0)
                        {
                                count++;
                                a = a / 10;
                        }
                        for (int i = count; i > 0; count --){
                                _putchar((n / (10 ** i)) + '0');
                        }
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
