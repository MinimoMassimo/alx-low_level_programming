#include "_putchar.c"

/**
 * main - prints '_putchar' using _putchar library
 *
 * Return: 0 always
 */
int main (void)
{
	char *str = "_putchar";

	while(*str)
	{
		_putchar(*str);
	}
	_putchar('\n');
	return (0);
}
