#include "main.h"

/**
 * set_bit - set bit to 1 at index
 * @index: the index
 * @n: the number
 * Return: 1 if success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bit;
	unsigned long int temp = 1;

	max_bit = (sizeof(unsigned long int) * 8);
	if (index > max_bit)
		return (-1);

	temp <<= index;
	*n = (*n | temp);
	return (1);
}
