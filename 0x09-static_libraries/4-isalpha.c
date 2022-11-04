#include "main.h"

/**
 * _isalpha - checks for alpahbetic characters
 * @c: sincle letter input
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}
