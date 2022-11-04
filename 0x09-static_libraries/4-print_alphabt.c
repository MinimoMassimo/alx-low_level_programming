#include <stdio.h>

/**
 * main - prints alphabet in lower case except for q and e
 *
 * Return: 0 always
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
