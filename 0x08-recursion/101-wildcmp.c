#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int i, a = 0;

	if (s2[i] == '*')
	{
		a = 1;
		i++;
	}

}
