#include "main.h"


/**
 * print_binary - prints binary representation of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int temp = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (temp > 0)
	{
		len++;
		temp >>= 1;
	}
	len--;
	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
