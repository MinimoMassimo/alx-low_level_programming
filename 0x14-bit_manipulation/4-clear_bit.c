#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: the number
 * @index: the index
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bit;
	unsigned long int temp = 1;

	max_bit = (sizeof(unsigned long int) * 8);
	if (index > max_bit)
		return (-1);
	temp = ~(temp << index);
	*n = (*n & temp);
	return (1);
}
