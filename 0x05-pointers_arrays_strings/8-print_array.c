#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: the number of elements to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;
	int size = 0;

	for (i = 0; a[i] != '\0';i++)
		size++;
	printf("%d\n", size);
	if (i < n)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
	printf("%d\n", a[n - 1]);
	}
	else
		printf("\n");
}
