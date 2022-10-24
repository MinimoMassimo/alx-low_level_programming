#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string to be processed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, size;

	while (str[i] != '\0')
	{
		size++;
		str++;
	}
	for (i = (size / 2); i < size; i++)
	{
		_putchar(str[i - 1]);
	}
	_putchar('\n');
}
