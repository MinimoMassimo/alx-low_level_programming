#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string to be processed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
	{
		str++;
	}
	for (i = (size / 2); i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
