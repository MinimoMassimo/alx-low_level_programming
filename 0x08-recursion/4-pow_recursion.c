#include "main.h"

/**
 * _pow_recursion - does x ** y
 * @x: the base
 * @y: the power
 * Return: x ** y or -1 if y<0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
