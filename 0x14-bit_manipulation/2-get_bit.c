#include "main.h"

/**
 * get_bit - returns value of a bit at an index
 * @n: the number which first needs to be made into binary
 * @index: the index, starting from 0
 * Return: the desired bit, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bit;

	max_bit = (sizeof(unsigned long int) * 8);
	if (index > max_bit)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
