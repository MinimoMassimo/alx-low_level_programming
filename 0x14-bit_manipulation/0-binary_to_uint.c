#include "main.h"
#include <string.h>

/**
 * exponent - a^b
 * @a: base
 * @b: the exponent
 * Return: int
 */
unsigned int exponent(unsigned int a, unsigned int b)
{
	unsigned int ans = 1;
	unsigned int i;

	if (a == 0)
		return (0);
	if (b == 0)
		return (1);
	for (i = 1; i <= b; i++)
		ans *= a;
	return (ans);
}

/**
 * binary_to_uint - converts binary num to an unsigned int
 * @b: pointer to a string of 0s and 1s
 * Return: converted number, or 0 if b has chars that are not 01 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int count;
	int i = 0;

	if (b == NULL)
		return (0);
	count = strlen(b);
	count -= 1;
	for (; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		ans += (b[count] - 48) * exponent(2, i);
		i++;
	}
	return (ans);
}
