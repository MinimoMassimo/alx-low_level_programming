#include "main.h"

/**
 * reverse_array - reverses content of array of int
 * @a: the array
 * @n: number of elements in a
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b, i, j;

	i = 0;
	for (j = n - 1; j >= n / 2; j--)
	{
		b = a[j];
		a[j] = a[i];
		a[i] = b;
		i++;
	}
}
