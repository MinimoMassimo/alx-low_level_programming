#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: single input
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -1 * last;
	return (last);
}
