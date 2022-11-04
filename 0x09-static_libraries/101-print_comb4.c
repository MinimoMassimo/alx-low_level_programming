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
	int j;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (j = y + 1; j < 10; j++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((j % 10) + '0');
				if (x != 7 || y != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

