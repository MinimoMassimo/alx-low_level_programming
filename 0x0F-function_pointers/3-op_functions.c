#include "3-calc.h"

/**
 * op_add - sums a and b
 * @a: first int
 * @b: second int
 * Return: sum 
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - a - b
 * @a: first
 * @b: second
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: first
 * @b: second
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first
 * @b: second
 * Return: the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division
 * @a: first
 * @b: second
 * Return: the mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
