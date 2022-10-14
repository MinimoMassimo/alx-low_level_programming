#include <stdio.h>

/**
 * main - print all possible comboo of two digit numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int x;
	int y;
	int i;
	int j;

	for (x = 0; x < 10; x++){
		for (y = 0; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			for (i = x; i < 10; i++){
				for (j = y; j < 10; j++)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					if(x != 9 || y != 8 || i != 9 || j != 8)
						putchar(' ')
				}
			}
			if(x != 9 || y != 8)
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
