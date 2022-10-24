#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string to be processed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, size;

	size = 1;
	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 1)
		size--;
	for (i = (size / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
