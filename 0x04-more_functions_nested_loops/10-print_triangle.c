#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: null
 */
void print_triangle(int size)
{
	int i, j, x;

	for (i = 1; i <= size; i++)
	{
		for (x = 0; x < size; x++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}
