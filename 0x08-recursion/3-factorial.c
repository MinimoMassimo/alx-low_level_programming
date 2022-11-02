#include "main.h"

/**
 * factorial - calculaes factorial of input
 * @n: the input
 * Return: the factorial of n
 */
int factorial(int n)
{
	int fact;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return n * factorial(n - 1);
}
