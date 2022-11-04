#include "main.h"

/**
 * puts2 - prints every other character, starting with the first
 * @str: string to be inputted
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	int size = -1;

	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	for (i = 0; i <= size; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
