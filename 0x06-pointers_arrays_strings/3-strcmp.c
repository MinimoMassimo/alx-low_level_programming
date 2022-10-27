#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: ASCII difference between s1 and s1 after converting to unsigned char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return *(const unsigned char*)s1 - (const unsigned char*)s2;
}
