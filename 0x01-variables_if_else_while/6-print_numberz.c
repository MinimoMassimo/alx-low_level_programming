#include <stdio.h>

/**
 * main - prints all digits from 0 to 9 with putchar() and no char variable
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return(0);
}
