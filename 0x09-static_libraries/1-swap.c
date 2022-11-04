#include "main.h"

/**
 * swap_int - swaps he values of two int
 * @a: single input of type *int
 * @b: single input of type *int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
