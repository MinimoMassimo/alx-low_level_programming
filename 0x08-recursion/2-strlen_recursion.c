#include "main.h"

/**
 * _strlen_recursion - returns length of a string;
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count += _strlen_recursion(s + 1);
		count++;
	}
	return count;
}
