#include "main.h"

/**
 * _isupper(intc) - checks for uppercase characters
 * @c: sincle input  char
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
			return (1);
	}
	return (0);
}
