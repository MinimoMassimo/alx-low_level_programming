#include <stdio.h>

/**
 * main - prints single digts from 0 to 9
 *
 * Return: 0 always
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
