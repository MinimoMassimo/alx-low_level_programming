#include "_putchar.h"
/**
 * main - prints '_putchar' using _putchar library
 *
 * Return: 0 always
 */
int main (void)
{
	char str[] = "_putchar";
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
