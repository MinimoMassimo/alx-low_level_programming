#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: nothing
 */
void print_number(int n)
{
	int i = 0;
	int j = 1;
	int x = 10;
	int a = 0;

	if (n < 0)
	{
		n *= -1;
		a = 1;
	}
	while ( n % x != n)
	{
		i++;
		x *= 10;
	}
	while (i != 0)
	{
		j *= 10;
		i --;
	}
	if (a == 1)
		_putchar('-');
	_putchar((n / j) + '0');
	while ( j / 10 >= 1)
	{
		_putchar(((n % j) / (j / 10)) + '0');
		j /= 10;
	}
	_putchar('\n');
}
