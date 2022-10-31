#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix (it's a square)
 * Return: the sum
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;
	
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size, i = size + i + 1)
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < ((size * size) - 1); i = size + i - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
