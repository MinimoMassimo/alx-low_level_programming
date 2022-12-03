#include "main.h"

/**
 * flip_bits - number of bits you need to flip to get from one num to another
 * @n: num1
 * @m: num2
 * Return: num of bits difference
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;
	unsigned long int difference;

	/* the num of bits that are different (gotten by XOR operation)*/
	difference = n ^ m;
	do {
		diff += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);
	return (diff);
}
