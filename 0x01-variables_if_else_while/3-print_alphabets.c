#include <stdio.h>

/**
 * main - starting point 
 *
 * Return: 0 always
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
