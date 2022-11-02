#include "main.h"

/**
 * prime - helper funciton
 * @n: the input
 * @i: the current divisor
 * Return: the answer
 */
int prime(int n, int i)
{
	if (n == 2)
		return (1);
	else if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return 1;
	return (prime(n, i + 1));
}
/**
 * is_prime_number - tells you if input is a prime number or not
 * @n: input
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	return (prime(n, i));
}
