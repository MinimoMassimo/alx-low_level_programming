#include "main.h"

/** sqrtt - helper function
 * @n: the number
 * @i: the solution
 * Return: the solution
 */
int sqrtt(int n, int i)
{
	if (n / i == i)
		return (i);
	if (i >= n / 2)
		return (-1);
	return (sqrtt(n, i + 1));
}
/**
 * _sqrt_recursion - returns square root of n
 * @n: single input
 * Return: the solution
 */
int _sqrt_recursion(int n)
{
	int q = 1;
	return (sqrtt(n, q));
}
