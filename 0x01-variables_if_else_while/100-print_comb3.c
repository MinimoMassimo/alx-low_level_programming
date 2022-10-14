#include <stdio.h>

/**
 * main - print possible combos of two digits
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) = '0');
		}
		putchar('\n');
	}
	return (0);
}
