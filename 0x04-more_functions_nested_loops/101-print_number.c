#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: nothing
 */
void print_number(int n)
{
	int i;
	int j = 1;

	while ( n % i != n)
		i++;
	while (i != 0)
	{
		j *= 10;
		i --;
	}
	_putchar((n / j) + '0');
	while ( j / 10 >= 10)
	{
		_putchar(((n % j) / (j / 10)) + '0');
		j /= 10;
	}
	_putchar('\n');
}
