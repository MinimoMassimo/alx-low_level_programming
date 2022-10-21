#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: null
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i<= n; i++)
	{
		for (j = 0; j < n - i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
