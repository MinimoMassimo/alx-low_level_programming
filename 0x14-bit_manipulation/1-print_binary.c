#include "main.h"

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
 * printing - prints in reverse
 * @ curr: the current
 * @size: size of the whole int
 * Return: nothing
 */
void printing(int curr, int size)
{
	if (size <= 0)
		return;
	printing(curr / 2, size - 1);
	_putchar((curr % 2) % 10) + '0';
}

/**
 * print_binary - prints binary rep of a num
 * @n: the decimal num
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int size = 0;
	int curr = (int)n;
	unsigned int exp = 0;

	while (exp < n)
	{
		exp = exponent(2, size);
		size++;
	}
	printing(curr, size);
}
