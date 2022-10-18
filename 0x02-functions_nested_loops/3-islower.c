#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: char to be tested
 * Return: 1 if a lowercase char exists, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 61)
		return (1);
	return (0);
}
