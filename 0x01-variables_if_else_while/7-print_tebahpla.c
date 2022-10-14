#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: 0 always
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
                putchar(x);
	putchar('\n');
	return (0);
}
