#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: single input
 * Return: the length of the input
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
