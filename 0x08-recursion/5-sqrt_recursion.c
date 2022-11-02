#include "main.h"

/**
 * _sqrt_recursion - returns square root of n
 * @n: single input
 * Return: the solution
 */
int _sqrt_recursion(int n)
{
	int q;
	if (q * q == n)
		return (q);
	
	q = _sqrt_recursion(n - 1);
	return (n);
}
