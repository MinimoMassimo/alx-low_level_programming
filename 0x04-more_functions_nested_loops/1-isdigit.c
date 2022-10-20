#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: single input type int
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int s;

	for (s = 0; s <= 9; s++){
		if (s == c)
			return (1);
	}
	return (0);
}
