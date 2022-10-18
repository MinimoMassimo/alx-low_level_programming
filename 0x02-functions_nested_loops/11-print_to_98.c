#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: single input of type int
 * Return: void
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n < 10)
			_putchar(n);
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
