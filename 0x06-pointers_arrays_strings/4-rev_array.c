#include "main.h"

/**
 * reverse_array - reverses content of array of int
 * @a: the array
 * @n: number of elements in a
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b, i;

	i = 0;
	for (n -= 1; n >= n / 2; n--)
	{
		b = a[n];
		a[n] = a[i];
		a[i] = b;
		i++;
	}
}
