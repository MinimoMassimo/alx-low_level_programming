#include "_putchar.c"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
