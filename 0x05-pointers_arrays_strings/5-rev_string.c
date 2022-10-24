#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be processed
 * Return: nothin
 */
void rev_string(char *s)
{
	int size = 0;
	char *sol;

	sol = s;

	while (*s != '\0')
	{
		s++;
		size++;
	}
	size -= 1;
	while (size >= 0)
	{
		*(sol + size) = *s;
		s--;
		size --;
	}
	s = sol;
}
